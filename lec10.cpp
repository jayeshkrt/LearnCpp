// Lecture 10
// recursion
// Jayesh Kumar Tiwari 2 January 2021

#include <iostream>

using namespace std;

int factorial(int n){
	if(n==1){
		return 1;
	}
	return (n*factorial(n-1));
}

int fibonacci(int n){
	if (n == 1){
		//cout << " ,1";
		return 1;
	}
	else if (n ==2){
		//cout << " ,1";
		return 1;
	}

	
	return (fibonacci(n-1)+fibonacci(n-2));
}

int main(){
	int facn = 9;
	int facv;
	int fibn = 9;
	int fibv;
	
	// call factorial function to get the factorial of n
	facv = factorial(facn);
	
	// cal fibonacci function to get the fib no. of n
	fibv = fibonacci(fibn);
	
	cout <<endl << "Factorial of "<< facn << " is "<<facv << ". And fibonacci no of " << fibn << " is " << fibv << endl;
}
