/*  Section 7
    Challenge
    
    Write a C++ program as follows:
    
    Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

    Declare an empty 2D vector called vector_2d
    Remember, that a 2D vector is a vector of vector<int>
    
    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
    Display the elements in vector_2d using the at() method
    
    Change vector1.at(0) to 1000
    
    Display the elements in vector_2d again using the at() method
    
    Display the elements in vector1 
    
    What did you expect? Did you get what you expected? What do you think happended?
*/
 
//My solution
   
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // your solution goes here
    vector <int> vector1;
    vector <int> vector2;
    
    cout<<"please enter the first number to put into the vector1"<<endl;
    int number1_to_insert {};
    cin>>number1_to_insert;
    cout<<"please enter the second number to put into the vector1"<<endl;
    int number2_to_insert {};
    cin>>number2_to_insert;
    
    vector1.push_back(number1_to_insert);
    vector1.push_back(number2_to_insert);
    
    cout << "\nvector1: " << endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"The size of vector1 is now "<<vector1.size()<<endl;
    
    cout<<"please enter the first number to enter into the vector2"<<endl;
    cin>>number1_to_insert;
    cout<<"please enter the second number to enter into the vector2"<<endl;
    cin>>number2_to_insert;
    
    
    vector2.push_back(number1_to_insert);
    vector2.push_back(number2_to_insert);         
    
    cout << "\nvector2: " << endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"The size of vector2 is now "<<vector2.size()<<endl;
    
    vector <vector<int>> vector_2D;
    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);
    
    cout << "\nvector_2D: " << endl;
    cout<<vector_2D.at(0).at(0)<<"  "<<vector_2D.at(0).at(1)<<endl;
    cout<<vector_2D.at(1).at(0)<<"  "<<vector_2D.at(1).at(1)<<endl;
    
    cout<<"Please change the first number in vector one in order to see whether it changes vector_2D or just vector1"<<endl;
    cin>>number1_to_insert;
    vector1.at(0)=number1_to_insert;
    
    cout<<"vector_2D after the change of vector1"<<endl;
    cout<<vector_2D.at(0).at(0)<<"  "<<vector_2D.at(0).at(1)<<endl;
    cout<<vector_2D.at(1).at(0)<<"  "<<vector_2D.at(1).at(1)<<endl;
    
    cout<<"vector after the change"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"The size of vector1 is now "<<vector1.size()<<endl;
    
    cout << endl;
    return 0;
}

