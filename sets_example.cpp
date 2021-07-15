#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    string test= "zehe buoy heelo my name is anthony gonSalveZ";
    string apple="zehe buoY";

    set<char> s1;
    for(int i=0; i<apple.length(); i++){
        char ele = apple[i];
        s1.insert(ele);
    }

    // check element in string by erasing all elements if present
    for(int i=0; i<test.length(); i++){
        s1.erase(test[i]);
    }
    if(s1.empty()){
        cout << "All elements present"<<endl;
    }
    else{
        cout <<"all elements not present"<<endl;
    }
}