// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

	int cents {0};

    cout << "In the US: \n1 dollar is 100 cents \n1 quarter is 25 cents \n1 dime is 10 cents \n1 nickel is 5 cents, and \n1 penny is 1 cent. \n" <<endl;
    cout << "Enter an amount in cents : " << endl;
	cin >> cents;
	if(cents >=0)
	{
		cout << "Conversions: \n";
		cout << "Dollars (Cents x 100): " << cents/100 << endl;
        int q = cents%100;
		cout << "Quarter (Cents x 25): " << q/25 << endl;
        int d = q%25;
		cout << "Dimes (Cents x 10): " << d/10 << endl;
		int n = d%10;
		cout << "Nickels (Cents x 5): " << n/5 << endl;
		int p = n%5;
		cout << "Penny ((Cents x 1): " << p << endl;
	}
	else
	{
		cout << " Please enter number of cents greater than zero !!!" << endl;
	}
	return 0;
}


