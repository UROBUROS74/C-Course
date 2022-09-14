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

Good luck!

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> numbers{};
    char selection{};
    do{
        cout<<"\nP - print numbers"<<endl;
        cout<<"A - add a number"<<endl;
        cout<<"M - display the mean of numbers"<<endl;
        cout<<"S - display the smallest number"<<endl;
        cout<<"L - display the largest number"<<endl;
        cout<<"C - clear out the list"<<endl;
        cout<<"Q - Quit the program"<<endl;
        cout<<"F - find a number in the list"<<endl;
        cin>>selection;
        
        switch(selection){
            case'p': 
            case'P':
            case'a':
            case'A':
            case'M':
            case'm':
            case'S':
            case's':
            case'L':
            case'l':
            case'c':
            case'C':
            case'Q':
            case'q':
            case'f':
            case'F':
        if(selection=='C' || selection=='c'){
            numbers.clear();
            cout<<"List is empty now"<<endl;
        }
        if(selection=='p' || selection =='P'){
            if (numbers.size()==0){
                cout<<"[] list is empty now"<<endl;
            }
            else{
                cout<<"[ ";
                for(size_t i{0};i<numbers.size();i++)
                    {cout<<numbers.at(i)<<" ";
                    }
                cout<<"]"<<endl;}
        }
        if(selection=='A' || selection=='a'){
            cout<<"please enter an integer"<<endl;
            int integer{};
            cin>>integer;
            numbers.push_back(integer);
            cout<<integer<<" added"<<endl;
        }
        if(selection=='M' || selection=='m'){
            if (numbers.size()==0){
                cout<<"Unable to calculate the mean - no data";
            }
            else{
                int cumulative{};
                for(size_t i{0}; i<numbers.size();i++){
                    cumulative=cumulative+numbers[i];
                }
                cout<<"Mean is "<<static_cast<double>(cumulative)/numbers.size()<<endl;
            }
        }
        if(selection=='S' || selection=='s'){
            int minimum{numbers[0]};
            for(size_t i{}; i<numbers.size();i++){
                if(minimum<numbers[i]){
                    minimum=minimum;
                }
                else{
                    minimum=numbers[i];
                }
            }
            cout<<"The smallest number is "<<minimum<<endl;
        }
        if(selection=='L' || selection=='l'){
            int maximum{numbers[0]};
            for(size_t i{};i<numbers.size();i++){
                if(maximum>numbers[i]){
                    maximum=maximum;
                }
                else{
                    maximum=numbers[i];
                }
            }
            cout<<"The largest number is "<<maximum<<endl;
        }
        if(selection=='F' || selection=='f'){
            int counter{};
            int input{};
            cout<<"please enter an integer you want to find in the list"<<endl;
            cin>>input;
            if (numbers.size()==0){
                cout<<"The list is empty, so we cannot find any number here"<<endl;
            }
            else{
                for(auto number:numbers){
                    if(input==number){
                        counter+=1;
                    }
                }
            }
            cout<<"Your number occurs "<< counter<<" times in the list"<<endl;
        }
        break;
            default:
                cout<<"Invalid input"<<endl;
        }
        }while(selection!='q' && selection!='Q');
        
        cout<<"Goodbye";

    return 0;
}

