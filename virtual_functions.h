#ifndef _VIRTUAL_H_
#define _VIRTUAL_H_

class Account
{
    public:
        virtual void withdraw(double amount) const;
        virtual ~ Account();
        
};

class Checking : public Account
{
    public:
        virtual void withdraw(double amount) const override;
        virtual ~ Checking();
};

#endif