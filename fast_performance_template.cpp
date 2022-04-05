#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;


/*Write the class AddElements here*/


//*************
/to improve the time performance use the following block of code.

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();


//*******************************
template <class T>
class AddElements
{
    T element;
    public:
        AddElements(){}
        AddElements(T args){ element = args;}
        T add(T agr1)
        {
            return agr1 + element;
        }
        T concatenate (T arg2)
        {
            return element + arg2;
        }
        ~AddElements(){}
        
        
};




int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
