// Function overloading
// Jayesh Kumar Tiwari 29 December 2020

#include <iostream>

using namespace std;

// defining functions
void print(int i){
	cout << "Inccreased by 1 we print "<< i+1 << endl;
}

void print(char c){
	cout << "Inccreased by 1 we print "<< "t" << endl;
}

void print(double d){
	cout << "Inccreased by 1 we print "<< d+1.0000 << endl;
}

void print(float i){
	cout << "Inccreased by 1 we print "<< i+1.0 << endl;
}

int main(){
	// declare variables
	int number = 1899;
	char character = 's';
	double d = 90387.834276;
	float f = 425.78;
	cout<<"the original values are"<<number<<" "<< character<<" "<< d<<" "<< f<<" "<< endl;
	
	//calling functions
	print(number);
	print(character);
	print(d);
	print(f);
}
