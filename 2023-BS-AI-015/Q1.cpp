//file: file eman.cpp
//date: 1-05-2024
//name: eman tahir
//reg no. 2023-bs-ai-015
//question statement: Write a user-defined program to declare a class which stores a complex number. Demonstrate the use of constant objects, constant member function and constant arguments, using this class.

#include<iostream>
using namespace std;
class eman
{
	private:
		double real;
		double imag;
	public: 
	eman ()
	{
		real=(5.0);
		imag=(7.0);
	}
	int complex()
		const
		{
		cout<<real<<"+"<<imag<<"i"<<endl;
	    }
    
};
int main ()
{
	eman n;
	n.complex();
	return 0;
}
