// Lecture 12
// arrays
// Jayesh Kumar Tiwari 3 January 2021

#include <iostream>

using namespace std;

int main(){
	// defining variables
	int a[10];
	
	// initialising variables
	for(int i=0;i<10;i++){
		a[i]=i;
	}
	
	// printing variables
	for(int i=0;i<10;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	// pointer operations
	int *b = a;
	cout << b << " <- this is b, and this is a[0] " << a[0] << endl;
	b++;
	cout << b << " now this is b++ and this is a[1] " << a[1] << endl;
	
	// character arrays
	char ab[] = {'h', 'e','l','l','o','\0'};
	char hw_array[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd','!','\0'};
	cout << hw_array << "\n";
	cout << "ab is " << ab <<endl;
	
	const char *bb = "hellol";
	cout << bb<< endl;
}
