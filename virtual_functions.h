#ifndef _VIRTUAL_H_
#define _VIRTUAL_H_

class Account
{
    public:
        virtual void withdraw(double amount);
        virtual ~ Account();
        
};

class Checking : public Account
{
    public:
        virtual void withdraw(double amount);
        virtual ~ Checking();
};

#endif