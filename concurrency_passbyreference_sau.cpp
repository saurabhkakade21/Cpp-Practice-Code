//compiling command: g++ concurrency_cpp_sau.cpp -o sau -lpthread

#include <iostream>
#include <list>
#include <thread>
#include <string>

std::list <int> big_data;
const long SIZE = 50000000;


void DownloadFunction(std::string file_argument)
{
    std::cout << "[DownloadFunction] Downloading started...." << file_argument << std::endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        big_data.push_back(i);
    }
    std::cout << "[DownloadFunction] Fininshed Downloading...." << std::endl;
    
}

int main()
{
    // system("clear");
    std::string file_argument {"saurabh kakade"};
    std::cout << "[Main] Step 01: Operation has started..." << std::endl;

    std::thread thread_download(DownloadFunction, file_argument);
    std::cout << "[Main] Step 02: Started another operation..." << std::endl;

    // thread_download.detach();

    if(thread_download.joinable())
    {
        thread_download.join();
    }
    return 0;
}