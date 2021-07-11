// given a string, count the number of occurences of each letter
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    string str = "hey there! My name is Anthony Gonzalves";

    map<char, int> m1;
    for(int i=0; i < str.length(); i++){
        char letter = str[i];
        if (m1.find(letter) == m1.end()){
            m1[letter] = 0;
        }
        m1[letter]++;
    }

    for(auto itr=m1.begin(); itr != m1.end(); ++itr){
        cout << itr->first << " : " << itr->second<<"\t";
    }
}