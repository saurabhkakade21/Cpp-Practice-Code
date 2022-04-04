#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    private: 
        
        int age, standard;
        string first_name, last_name;
    
    public:
        
        Student() {};
        void set_age(int age) 
        {
            this->age = age;
        }
        void set_standard(int standard) 
        {
            this->standard = standard;
        }
        void set_first_name(string first_name) 
        {
            this->first_name = first_name;
        }
        void set_last_name(string last_name) 
        {
            this->last_name = last_name;
        }
        
        int get_age() 
        {
            return age;
        }
        int get_standard() 
        {
           return standard;
        }
        string get_first_name() 
        {
            return first_name;
        }
        string get_last_name() 
        {
            return last_name;
        }
        
        string to_string()
        {
            string final;
            ostringstream str1,str2;
            str1 << age;
            str2 << standard;
            string str_age = str1.str();
            string str_std = str2.str();
            
            
            final = str_age + "," + first_name + "," + last_name + "," + str_std;
            // cout << final << endl;
            return final;
        }
        
     
};

int main() {
    int age = 30, standard = 10;
    string first_name {"Saurabh"}, last_name{"Kakade"};
    
    // cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    cout << endl;
    
    return 0;
}