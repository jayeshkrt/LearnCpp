// Lecture 5: while and do while loops
// Jayesh Kumar Tiwari 19 December 2020

#include <iostream>

using namespace std;

int main(){
	// declare and initialize variables
	int multiplicand=5;
	int multiplier=10;
	int product=0;
	
	//comput 5*10 using addition
	while(multiplier > 0){
		product+=multiplicand;
		multiplier--;
	}
	cout<<"Multiplier = "<<multiplier<<" and product = "<<product<<endl;
	
	//initialze product to zero
	product=0;
	// the do while loop ietrates AT LEAST ONCE EVEN IF THE CONDITION IS NOT FOLLOWED
	// note that there is nothing inside the WHILE LOPP NO {}
	do{
		product+=multiplicand;
		multiplier--;
	}
	while(multiplier > 0);
	cout<<"multiplier = "<<multiplier<<" and product = "<<product<<endl;
}
