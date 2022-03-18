//compiling command: g++ concurrency_cpp_sau.cpp -o sau -lpthread

#include <iostream>
#include <list>
#include <thread>

std::list <int> big_data;
const long SIZE = 50000000;

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
void DownloadFunction(const String &file_argument)
{
    std::cout << "[DownloadFunction] Downloading started...." << std::endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        big_data.push_back(i);
    }
    std::cout << "[DownloadFunction] Fininshed Downloading...." << std::endl;
    
}

int main()
{
    // system("clear");
    String file_argument;
    std::cout << "[Main] Step 01: Operation has started..." << std::endl;

    //following code will create two instances of String.
    // std::thread thread_download(DownloadFunction, file_argument);
    /* output for passing without reference
        String()
        [Main] Step 01: Operation has started...
        String(const String&)
        String(const String&)
        ~String()
        [Main] Step 02: Started another operation...
        String(const String&)
        [DownloadFunction] Fininshed Downloading....
        ~String()
        ~String()
        ~String()
    */


    //so use passed by reference as threads are creating instances without it.
    // std::thread thread_download(DownloadFunction, std::ref(file_argument));

    /* Output from passing with reference
        String()    //only one instance of SString is called.
        [Main] Step 01: Operation has started...
        [Main] Step 02: Started another operation...
        [DownloadFunction] Downloading started....
        [DownloadFunction] Fininshed Downloading....
        ~String()
    */

    //pass by const reference use std::cref(argument)
    std::thread thread_download(DownloadFunction, std::cref(file_argument)); 

    std::cout << "[Main] Step 02: Started another operation..." << std::endl;

    // thread_download.detach();

    if(thread_download.joinable())
    {
        thread_download.join();
    }
    return 0;
}