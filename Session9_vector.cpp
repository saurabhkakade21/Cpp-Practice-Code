// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>
#include <stdlib.h>




using namespace std;

int main() {
    char choice {};
    vector <int> number {};
    
    system("clear");
    do{

       

        cout << "\n\nP - Print numbers \nA - Add a number \nM - Display mean of the numbers \nS - Display the smallest number \nL - Display the largest number \nQ - Quit \n Enter your choice: ";
        cin >> choice;

        if (choice == 'P' || choice == 'p' || choice == 'A' || choice == 'a' || choice == 'M' || choice == 'm' || choice == 'S' || choice == 's' || choice == 'L' || choice == 'l' || choice == 'Q' || choice == 'q')
        {
    
            //choice P
            if(choice == 'P' || choice == 'p')
            {
                if (number.size() == 0)
                {
                    cout << "\n[] - the list is empty !!!" << endl;
                }
                else
                {
                    cout << "\n\tList : ";
                    for (auto item:number)
                    {
                        cout << item << " ";
                    }
                }
                            
            }

            //choice A
            if(choice == 'A' || choice == 'a')
            {
                int temp_number {0};
                cout << "\nPleae enter the number to add in list: " ;
                cin >> temp_number;
                number.push_back(temp_number);
                cout << temp_number << " added in list";
                
            }

            //choice M
            if(choice == 'M' || choice == 'm')
            {
                if (number.size() == 0)
                {
                    cout << "\n[] - the list is empty !!!" << endl;
                }
                else
                {
                    int mean_number {0};
            
                    for (auto mean: number)
                    {
                        mean_number += mean;
                    }
                    cout << "\nMean: " << mean_number/number.size() << endl;
                
                }
                
            }

            //choice S
            if(choice == 'S' || choice == 's')
            {
               

                if (number.size() == 0)
                {
                    cout << "\n[] - the list is empty !!!" << endl;
                }
                else
                {
                    int small_number = number.at(0);
                    for (auto small: number)
                    {
                        if(small < small_number)
                        {
                            small_number = small;
                        }
                    }
                    cout << "\nThe smallest number is : " << small_number << endl;
                
                }

                
            }

            //choice L
            if(choice == 'L' || choice == 'l')
            {
                

                if (number.size() == 0)
                {
                    cout << "\n[] - the list is empty !!!" << endl;
                }
                else
                {
                    int large_number = number.at(0);
                    for (auto large: number)
                        {
                            if(large > large_number)
                            {
                                large_number = large;
                            }
                        }
                    cout << "\nThe largest number is : " << large_number << endl;

                }
            }
        }
        else
        {
            cout << "\n\tEnter your choice again !!!" << endl;
            // system("clear");
        }
        
    }while(choice != 'q' && choice !='Q');
    


    return 0;
}

