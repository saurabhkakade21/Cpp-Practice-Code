#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <cctype>

class Person
{
    std::string name;
    int age;
    public:
    Person() = default;
    Person(std::string name, int age)
        :name(name), age(age) {}
    bool operator < (const Person &rhs) const
    {
        return this-> age < rhs.age;
    }
    bool operator == (const Person &rhs) const
    {
        return (this->age == rhs.age && this->name == rhs.name);
    }

};

//find an element in an container

void find_test_01(int f)
{
    std::vector <int> vec {1,2,3,4};
    auto loc = find(vec.begin(),vec.end(),f);

    if(loc != std::end(vec))
        std::cout << "Found this number " << *loc << std::endl;
    else
        std::cout << "Not Found this number " << f << std::endl;
}

void find_test_02()
{
    std::list<Person> players{
        {"a",10},
        {"b",20},
        {"c",30},
        
    };

    auto loc = std::find(players.begin(),players.end(), Person{"b",200}); //using the == operator

    if(loc != std::end(players))
        std::cout << "Found this player " << std::endl;
    else
        std::cout << "Not Found this player " << std::endl;
}

//count algorithm to count the number of occurences
void count_test()
{
    std::vector<int> vec {1,2,3,4,1,1,1};

    int num = std::count(begin(vec),end(vec),1);
    std::cout << num << " occurence found !!" << std::endl;
}

void count_if_test()
{
    std::vector<int> vec {1,2,3,4,1,1,1};

    int num = std::count_if(begin(vec),end(vec),[](int x){return x%2 == 0;});
    std::cout << num << " Even numbers found !!" << std::endl;

    num = std::count_if(begin(vec),end(vec),[](int x){return x%2 != 0;});
    std::cout << num << " Odd numbers found !!" << std::endl;

    num = std::count_if(begin(vec),end(vec),[](int x){return x%2 != 0;});
    std::cout << num << " Odd numbers found !!" << std::endl;
}

int main()
{
    find_test_01(4);
    find_test_02();
    count_test();
    count_if_test();
    //eop
    return 0;

}