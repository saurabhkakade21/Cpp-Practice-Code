#include <iostream>
#include "virtual_functions.h"

using namespace std;

void Account::withdraw(double amount)
{
     std::cout << "In Account class: Withdraw: " << std::endl;
}

void Checking::withdraw(double amount)
{
     std::cout << "In Checking class: Withdraw: " << std::endl;
}

Account :: ~Account()
{
     cout << "Account destructor" << endl;
}

Checking :: ~Checking()
{
     cout << "Checking destructor" << endl;
}

int main()
{
    Account *p1 = new Account();
    Account *p2 = new Checking();

    p1->withdraw(1000);
    p2->withdraw(2000);
    
    delete p1;
    delete p2;
    
    return 0;
}