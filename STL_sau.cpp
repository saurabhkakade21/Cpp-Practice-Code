#include "iostream"
#include <string>
using namespace std;

template <typename T> 
T min_(T a, T b)
{
    return (a>b)?a:b;
}

struct Person
{
    string name;
    int age;
    bool operator > (const Person &rhs) const
    {
        return this-> age > rhs.age;
    }
};

template <typename T1,typename T2>
void func(T1 a, T2 b)
{
    cout << a << " void func " << b << endl;
}

//overload insertion function

ostream &operator << (ostream &os,const Person &p)
{
    os << p.name;
    return os;
}

template <typename T>
void my_swap(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main()
{
    // int a = 20;
    // int b = 30;
    Person P1 {"Saurabh",94};
    Person P2 {"XYZ",54};
    Person P3 = min_(P1,P2);
    cout << P3.name << " is elder" << endl;
    cout << min_<int>(2,9) << endl;
    cout << min_<double>((2+10),(9-1)) << endl;
    func<int,char>(10,'A');
    func(P1,P2);
    func(P1.age,P2.age);
    func(P1.name,P2.name);
    
    my_swap("100","saurabh");
          
    return 0;
}
 