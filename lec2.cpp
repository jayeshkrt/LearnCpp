// Lecture 2: Variables
// Jayesh Kumar Tiwari 17 December 2020

#include <iostream>

using namespace std;

int main(){
	//Declare variables
	int a; //this allocates a chunk of memory (4 bytes for integer here) in the name of that variable
	int b;
	int sum;
	
	//initialize variables
	a=5;
	b=10;
	// count sum
	sum=a+b;
	// print sum
	cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
	
	// Another Data Type FLOAT
	float ab;
	float bb;
	float sumb;
	
	ab= 5.098;
	bb=0.98646;
	sumb=ab+bb;
	cout<<"SUm is "<<sumb<<" of "<<ab<<" and "<<bb<<endl;
	
	//Another Data Type CHAR
	//char is of one byte
	// NOTE THAT \n is FORWARD SLASH NOT OUR REGULAR DIVISION SIGN!!!!!!!!!!!!!	
	const char* some_string="Hello josh this si shsdih\n"; //this is a string
	// const above tells that this thing won't change
	// char* points to a set of characters, it is not a value in itself
	// some_string is the name of that character array or string
	// You can just print this like any other variable
	cout << "some_string is "<<some_string;
}
