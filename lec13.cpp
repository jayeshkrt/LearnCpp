// Lecture 13
// classes
// Jayesh Kumar Tiwari 5 January 2021

#include <iostream>

using namespace std;

class complex{
	int a;
	int b;
	public:
		void input(int x, int y){
			a=x;
			b=y;
		}
		void display(){
			cout << a << " + i" <<b<<endl;
		}
		complex add(complex c){
			complex temp;
			temp.a = a+c.a;
			temp.b = b+c.b;
			return (temp);
		}
};

class apple{
	int good;
	int bad;
	public:
		void number_of(int no_of_a, int no_of_b);
		void total();
};
// this is another way to define functions of a class
void apple:: number_of(int no_of_a, int no_of_b){
	cout << "Number of good apples are: " << no_of_a << " and bad apples are: " << no_of_b;
	good = no_of_a;
	bad =no_of_b;
}

void apple::total(){
	cout <<  "\nA total of " << good+bad << " apples are there.";
}

int main(){
	complex c1, c2, c3; // c1 is called an object
	
	c1.input(2,3);
	c1.display();
	
	c2.input(4,5);
	cout<< endl;
	c2.display();
	cout<<endl;
	
	c3 = c2.add(c1);
	c3.display();
	cout << endl;
	
	apple a1;
	a1.number_of(1,54);
	a1.total();
}
