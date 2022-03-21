#include <iostream>
#include "OO_sau.h"
#include <cstring>
using namespace std;
//object's activities are happening in stack
//poiter str is stored in stack that points to heap memory

//no args constructor
Mystring::Mystring() :str{nullptr}
{
    str = new char[1]; //allocates space for one character in heap
    *str = '\0'; //pointing to terminator
}

//overloaded constructor
Mystring::Mystring(const char *s) :str{nullptr}
{
    if(s==nullptr)
    {
        str = new char[1]; //allocates space for one character in heap
        *str = '\0'; //pointing to terminator   
    }
    else
    {
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}

//copy constructor
Mystring::Mystring(const Mystring &source) : str{nullptr}
{
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}

//destructor
Mystring::~Mystring() 
{
    delete [] str;
}

//operator overloading  - copy constructor
Mystring &Mystring::operator= (const Mystring &rhs)
{
    cout << "Copy Assignment ... " << endl;
    if(this == &rhs) //check if we are not assigning to ourself
    // "this" is the pointer to the current object
    {
        return *this; //dereference the pointer
    }
    delete [] this->str;
    str = new char[strlen(rhs.str) +1];
    strcpy(this->str,rhs.str);
    return *this;
}
        

//display method
void Mystring::display() const
{
    cout << str << " : " << get_length() << endl;
}

//get length
int Mystring::get_length() const
{
    return strlen(str);
}

//string getter
const char *Mystring::get_str() const
{
    return str;
}
