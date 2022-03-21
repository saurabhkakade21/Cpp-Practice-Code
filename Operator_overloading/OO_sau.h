#ifndef _STRING_H_
#define _STRING_H_

class Mystring
{
    private:
        char *str; //C style string
    
    public:
        Mystring();
        Mystring(const char *s);
        Mystring(const Mystring &source);
        ~Mystring();
        Mystring &operator=(const Mystring &rhs); //only prototype and no code
        
        void display() const; //telling the compiler that this method should not modify the object.
        int get_length() const;
        const char *get_str() const;
};

#endif
