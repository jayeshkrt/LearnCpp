// Lecture 9
// Pass by value and pass by reference
// Jayesh Kumar Tiwari 2 Jamuary 2021

#include <iostream>

using namespace std;

void functionv(int i, char c, float f, float product){
	product = (i*f)+(i*f);
	cout<<"We are in value product is "<< product <<endl;
}

// in pass by reference we supply the actual address of the variables. So, the fucntion now does not have a copy of the variables which are 
// passed to it from main, rather the function uses the same space which is specified for the actual variables in the main function
void functionr(int &integer, char &c, float &h, float &produc){
	// the names integer, c, h, produc are just random names, in actuality, the address is beig passed, we just name the parameters like variables
	// to make it easy for us to allocate values to that address/
	produc = integer + integer; // here value is being passed to that actual address
	cout << "we are in reference, product is "<< produc << endl;
}

int main(){
	// declare variables
	int integer = 765;
	char c = 'j';
	float h = 09848.9438;
	float product = h*integer;
	cout << integer << endl << c << endl << h << endl << product <<endl;
	
	// pass by value
	functionv(integer, c, h, product);
	cout << "After passing by value, product = "<<product<<endl;
	
	// pass by reference
	functionr(integer, c, h, product);
	cout << "After passing by reference product = "<<product<<endl;
}
