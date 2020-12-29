// Lecture 5: for loops
// jayesh Kumar Tiwari 19 December 2020

#include <iostream>

using namespace std;

int main(){
	// declare and initialize variables
	int multiplicand=5;
	int multiplier=10;
	int product=0;
	
	// compute product of 5*10 using addition
	cout<<"Before for loop. Product = "<<product<<endl;
	for(int i=0; i<multiplier; i++){
		product = product+multiplicand;
		cout<<"iteration "<<i<<". product= "<<product<<endl;
	}
}
