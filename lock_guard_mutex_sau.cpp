//compiling command: g++ mutex_sau.cpp -o sau -lpthread

#include <iostream>
#include <list>
#include <thread>
#include <mutex>

std::mutex download_mutex;
std::list <int> big_data;
const long SIZE = 10000;

class String
{
    public:
        String()
        {
            std::cout << "String()" << std::endl;
        }
        String(const String &)
        {
            std::cout << "String(const String&)" << std::endl;
        }
        String & operator = (const String&)
        {
            std::cout << "String & operator = (const String&)" << std::endl;
            return *this;
        }
        ~String()
        {
            std::cout << "~String()" << std::endl;
        }

};

// void DownloadFunction(String file_argument) for without pass by reference
// void DownloadFunction(const String &file_argument) for pass by reference

//pass by constant reference
void DownloadFunction_01(const String &file_argument)
{
    // std::cout << "[DownloadFunction] Downloading started...." << std::endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        // download_mutex.lock(); //to avoid the race conditions

        std::lock_guard <std::mutex> mtx (download_mutex); //to void deadlocks
        
        big_data.push_back(i);
        if(i == 500)
        {
            return; //returning before unclocking the thread lock which can create deadlocks
        }
        // download_mutex.unlock(); //if lock_guard is used then remove the unlock code
    }
    // std::cout << "[DownloadFunction] Fininshed Downloading...." << std::endl;
    
}

void DownloadFunction_02(const String &file_argument)
{
    // std::cout << "[DownloadFunction] Downloading started...." << std::endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        std::lock_guard <std::mutex> mtx (download_mutex); //to void deadlocks
        big_data.push_back(i);
        // download_mutex.unlock();
    }
    // std::cout << "[DownloadFunction] Fininshed Downloading...." << std::endl;
    
}

int main()
{
    // system("clear");
    String file_argument;
    int cores = std::thread::hardware_concurrency();
    std::cout <<"The number of cores on CPU is : " << cores << std::endl;
    // std::cout << "[Main] Step 01: Operation has started..." << std::endl;

    //pass by const reference use std::cref(arg)

    std::thread thread_download_01(DownloadFunction_01, std::cref(file_argument)); 
    std::thread thread_download_02(DownloadFunction_02, std::cref(file_argument)); 

    // std::cout << "[Main] Step 02: Started another operation..." << std::endl;

    // thread_download.detach();

    if(thread_download_01.joinable())
    {
        thread_download_01.join();
    }
    
    if(thread_download_02.joinable())
    {
        thread_download_02.join();
    }

    std::cout << "The size of list: " << big_data.size() << std::endl;

    return 0;
}