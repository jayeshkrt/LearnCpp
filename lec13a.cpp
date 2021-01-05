// lecture 13a
// Structures (this has been taken to get an idea of structures in cpp so that we can absorb concept of classes easily)
// Jayesh Kumar Tiwari 4 January 2021

#include <iostream>

using namespace std;

// structure is used to define custom data types
struct book{
	// private means they can be accessed only inside the structure
	private:
		int bookid;
		char title[20];
		float price;
	// public means they can be accessed from the main fucntion
	public:
		void input(){
			cout << "Enter bookID, title and price: " << endl;
			cin >> bookid >> title >> price;
		}
		void display(){
			cout << "Book ID is : " << bookid << "\n" <<"Book title is: " << title << "\nBook price is: "<<price;
		}
		//in this we kept all the variables and function in one place this is called encapsulation
};

int main(){
	// declaring variable b1 which is of type "book"
	book b1;
	// we use the methods in the structure to display and input the values of the structure
	b1.input();
	b1.display();
}
