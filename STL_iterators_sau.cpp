#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

//display any vector of integers using ranged based for loop.

void display(const std::vector<int> &vec)
{
    std::cout << "[ ";
    for(auto const &i: vec)
    {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void test_01()
{
    std::vector<int> nums_01 {1,2,3,4,5};
    auto it = nums_01.begin();
    std::cout << *it << std::endl;

    it = nums_01.end()-1;
    std::cout << *it << std::endl;

}

void test_02()
{
    //display all vector elements using an iterator
    std::vector<int> nums_02 {1,2,3,4,5};
    auto it = nums_02.begin();
    while(it != nums_02.end())
    {
        std::cout << *it << " " << std::endl;
        it++;
    }
    display(nums_02);

}

void test_03()
{
    //using constant iterators where values of iterator pointing to cannot be changed.
    std::vector<int> nums_03 {1,2,3,4,5};
    auto it = nums_03.cbegin();
    // or
    //std::vector<int>::const_iterator it = nums_03.begin();
    //*it = 0 will give compiler errors.

}

int main()
{
    test_01();
    test_02();
    test_03();
    return 0;
}