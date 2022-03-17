#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    system("clear");
    cout << "Enter the string for letter pyramid: ";
    string input_string {};
    getline(cin,input_string);
    size_t length = input_string.length();

    for(size_t i=0; i < length; i++)
    {
        cout << " ";
        for(size_t j = 0;j < length-i;j++)
        {
            cout << " ";
        }
        
        string str = input_string.substr(0,i+1);
        reverse(str.begin(), str.end());

        cout << input_string.substr(0,i+1) + str.substr(1,str.length()-1);

        for(size_t j = 0;j < i+1;j++)
        {
            cout << " ";
        }
                       
        cout << endl;
        
    }


    return 0;
}