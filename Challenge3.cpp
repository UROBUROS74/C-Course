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

