// heap using stl
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector <int> v1 = {12,857,26,92,2763,356};

    make_heap(v1.begin(), v1.end());
    // v1 is now a heap. Not a vector anymore
    cout << "Max element is: "<< v1.front()<<endl;

    // append to heap
    v1.push_back(11);
    v1.push_back(22);
    v1.push_back(2764);

    // check what's the first element
    cout << "add 11,22,2764.\nbefore push_heap: "<<v1.front()<<endl;
    // reorder elements
    push_heap(v1.begin(), v1.end());

    // after push_heap
    cout << "After push_heap(v1): "<<v1.front();

    // pop out the first element (max)
    // use v1.pop_back()
    v1.pop_back();  // applicale to elements of a vector
    cout << "After v1.pop() : "<<v1.front()<<"\n";
    
    // similar
    pop_heap(v1.begin(), v1.end());
    // print the max element
    cout << "After pop_heap, max element: "<< v1.front()<<"\n";
    
    // sort heap. After this operation it will no longer be a heap
    sort_heap(v1.begin(), v1.end());

    cout << decltype(v1);
    // pritn the elements of the sorted

}