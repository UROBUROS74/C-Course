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
    
    const int dollars{100};
    const int quarters{25};
    const int dimes{10};
    const int nikels{5};
    const int penies{1};
    int user_input{0};
    cout<<endl;
    
    cout<<"Please enter a number of cents"<<endl;
    cin >>user_input;
    cout<<"You can provide this change as follows: "<<endl;
    cout<<"dollars "<<user_input/dollars<<endl;
    user_input = user_input - (user_input/dollars)*dollars;
    cout<<"quarters "<<user_input/quarters<<endl;
    user_input = user_input - (user_input/quarters)*quarters;
    cout<<"dimes "<< user_input/dimes<<endl;
    user_input = user_input - (user_input/dimes)*dimes;
    cout<<"nikels "<<user_input/nikels<<endl;
    user_input = user_input - (user_input/nikels)*nikels;
    cout<<"Penies "<<user_input/penies<<endl;
    return 0;
}


