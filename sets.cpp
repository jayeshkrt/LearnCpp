// set is a group of unordered unique elements
// primarily used to check if number is present or not

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s1={1,3,2,4,2,1,22};
    // insert element
    s1.insert(4);
    s1.insert(44);

    // find element
    if(s1.find('C')==s1.end()){
        cout << "C is not there in the set" << endl;
    }
    else{
        cout << "present in the set" << endl;
    }

    // print set
    for(auto itr=s1.begin(); itr != s1.end(); ++itr){
        cout << *itr << " ";
    }
}