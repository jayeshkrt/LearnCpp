#include <iostream>
#include <map>
using namespace std;

int main(){
    // initialize a map
    map<char, int> m1={
        {'h',2},    // remember you CAN'T use "" instead of '' it will throw error
        {'j',1},
        {'n',9},
        {'k',10}
    };  // you CANNOT do m1 = {{},{},{}}; later. You MUST do it while defining
    // explicitly introduce key value pairs
    m1['a']=26;
    // make pair then add it to map
    pair<char, int> p1 ('b',25); // similar to map you can't specify in p1 = () format later
    // get the first and second element of pair
    cout << p1.first << " " << p1.second << endl;
    m1.insert(p1);
    
    // deleting a key value pair (just delete key, value automatically gets deleted)
    m1.erase(p1.first);
    m1.erase('h');
    //check if map is empty
    m1.empty();  // if empty then returns 1
    // check size of the map
    m1.size();

    // iterate over the map
    // auto means map<char, int>::iterator
    for(auto itr = m1.begin(); itr != m1.end(); ++itr){
        // cout << (*itr).first << " : " << (*itr).second << endl; // get the first and the
        // second of the pair
        // *itr.first is same as itr -> first
        cout << itr -> first << " : " << itr -> second<<endl;
    }
    
    // clear the whole map
    m1.clear();
}