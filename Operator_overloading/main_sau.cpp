#include <iostream>
#include "OO_sau.h"

using namespace std;

int main()
{
    Mystring empty;  //no arg constructor
    Mystring larry("Larry");    //overloaded constructor
    
    // Mystring stooge {larry};    //deep copy constructor
    //same as
    Mystring stooge = larry; // its not assignment
    // = is done default by compiler in cpp

    // overloading = operator is done in this project. 
    //check code   

    //also
    Mystring b;
    b = larry;
    b = {"This is a test !!!"};
    
    empty.display();
    larry.display();
    stooge.display();

    b.display();
    return 0;


}