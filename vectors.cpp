#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v1 = {1,2,3,4,5};
    // append elements to vector
    v1.push_back(4);
    // append to the beginning
    v1.insert(v1.begin(),0);
    // append to the second (index 1)
    v1.insert(v1.begin()+1, 9);
    // pop the last element
    v1.pop_back(); // does NOT return the popped integer
    // get sixe of the vector
    cout << v1.size() << endl;
    // get the capacity (doubles itself everytime it exceeds current value), also it remains
    // the same even when we start popping the elements
    cout << v1.capacity() << endl;
    // since capacity doesn't autoreduce, we shrink the capacity manually
    v1.shrink_to_fit();
    // now look at the capacity, it will be the size of the vector now
    cout << v1.capacity() << endl;
    // delete elements
    v1.erase(v1.begin()+1); // you need to give it a position in the form of v1.begin()

    // iterate over vector just like array
    for(int i = 0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    //fancy pointer method
    for(auto itr=v1.begin(); itr != v1.end(); ++itr){// NOTE the ++itr that is flaunted
        cout << *itr << " "; // note that we are de-referencing the pointer with *
    }
}