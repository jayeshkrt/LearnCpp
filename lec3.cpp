// lecture 4: if else and switch statements
// Jayesh Kumar Tiwari 19 December 2020

#include <iostream>

using namespace std;

int main(){
	int a=6;
	int n=0;
	int m=90;
	
	if (a*5==n+5){
		cout<<"We are in if statement."<<endl;
	}
	else if (m==90){
		cout<<"We are in else if statement"<<endl;
	}
	else{
		cout<<"Nothing worked"<<endl;
	}
	
	// switch statement
	switch (m){
		case 20:
			cout<<"m is 20"<<endl;
			break;
		case 50:
			cout<<"m is 50\n";
			break;
		case 90:
			cout<<"m is 90\n";
			break;
		default:
			cout<<"We are in default";
	}
}
