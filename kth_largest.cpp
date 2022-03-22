#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int kth_largest_element(vector <int> array1, int no_of_elements)
{
    //cout << array1.size() << endl;
    int sum = 0;
    sort(array1.begin(),array1.end());
    
    for(auto item: array1)
    {
        sum += item;
    }
    // cout << sum << endl;
    
    
    for(int i = 0; i < no_of_elements; i++)
    {
        cout << sum - array1[i] << endl;
    }

    return 0;
    
}


int main ()
{

    // system("clear");
    vector<int>array1{1,2,3,1000};
    int n = 3;

    kth_largest_element(array1,n);
    return 0;

}
