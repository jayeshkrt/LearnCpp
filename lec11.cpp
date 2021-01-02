// Lecture 11
// pointers
// Jayesh Kumar Tiwari 2 January 2021

#include <iostream>

using namespace std;

int main(){
	// declare variables
	int a = 5; // this means we are reserving a memory and naming it as a 
	
	// declare pointers
	int *b; // this means we are asking for a memory which stores the memory location of some other thing
			// in other words we define an integer pointer that points to something
	b = &a; // this means that we are allocating the pointer to address of a
			// i.e b will point to the address of a
	
	// the pointer b stores the memory location, the address of a should be that memory location
	// i.e b is pointing to the memory location of a 
	
	// let's first print the values and address of a and b
	cout << "a is : " << a << " address is : " << &a << endl;
	cout << "b is : " << b << " address is : " << &b << endl;
	cout << "*b = a is : " << *b << " address is : " << &*b << endl;
	
	// suppose we change the value. Now let's see what would happen
	a = 9;
	
	cout << "a is : " << a << " address is : " << &a << endl;
	cout << "b is : " << b << " address is : " << &b << endl;
	cout << "*b = a is : " << *b << " address (&*b) is : " << &*b << endl;
	cout << "(*&b) is " << *&b << endl;
	// USING REFERENCING 
	
	// create 2 variables using referencing
	int c = 10;
	int &d = c; // this means we are defining the reference variable (IT IS NOT ADDRESS OF D) it is a completely different type of variable called
				// reference variable. And all this does is that it is a replica of x, what changes are done in d or in c, the chnages are reflected
				// in c always.
	
	cout << "c is : " << c << " address is : " << &c << endl;
	cout << "d is : " << d << " address is : " << &d << endl;
	
}
