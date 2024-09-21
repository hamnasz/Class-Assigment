//1-MAY-2024
//Mohammad Mukedas
//2023-BSAI-008
//OOP ASSIGNMENT
//Write a user-defined program to declare a class which stores a complex number. Demonstrate the use of
//constant objects, constant member function and constant arguments, using this class.
#include<iostream> 
using namespace std;

class complex{
    int a, b; 
public:
    void setval(){
        cout<<"Enter Real number: "; 
        cin>>a;
        cout<<"Enter Imaginary number: "; 
        cin>>b;
    } 
    
    void display(){
        cout<<"Number is "<<a<<" + "<<b<<"b";
    }
};

int main(){
    complex obj;
    obj.setval();
    obj.display();
}
