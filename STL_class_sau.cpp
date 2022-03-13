#include <iostream>
#include <string>
#include <vector>

template <typename T>

class Item
{
    private:
        std::string name;
        T value;
    public:
        Item(std::string name, T value) : name(name), value (value)
        {
            //do nothing
        }
        T get_value() const
        {
            return value;
        }
        std::string get_name() const
        {
            return name;
        }
};

template <typename T1, typename T2>
struct My_pair
{
    T1 first;
    T2 second;
};

int main ()
{
    Item <int> item_01 {"Frank",100};
    std::cout << item_01.get_value() << " " << item_01.get_name() << std::endl;
    
    Item <std::string> item_02 {"Frank2","200"};
    std::cout << item_02.get_value() << " " << item_02.get_name() << std::endl;

    Item <Item<std::string>> item_03 {"Frank",{"C++","professor"}};
    std::cout << item_03.get_value().get_name() << " " << item_03.get_name() << std::endl;
    std::cout << item_03.get_value().get_value() << " " << item_03.get_name() << std::endl;

    std::vector <Item<double>> vec;
    vec.push_back(Item<double>{"larry",100.0});
    vec.push_back(Item<double>{"B",200.0});
    vec.push_back(Item<double>{"C",300.0});

    for ( const auto &item: vec)
    {
        std::cout << item.get_name() << " " << item.get_value() << std::endl;
    }

    My_pair <std::string,int> p1{"D",500};
    std::cout << p1.first << " " << p1.second << std::endl;

    My_pair <double,int> p2{1000.00,500};
    std::cout << p2.first << " " << p2.second << std::endl;

    return 0;
}