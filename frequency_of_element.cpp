// find frequency of element in array
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

unordered_map<int, int> m1;

void count_freq(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        m1[arr[i]]++;
    }
    
}

int query(int x){
    return m1[x];
}

int main(){
    int arr[] = {1,3,4,5,6,9,7,5,34,2,1,1,8,67,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    count_freq(arr, n);
    cout << query(5)<<"\n";
    cout << query(1)<<"\n";
    cout << query(7)<<"\n";
    
    // suppose array is sorted
    arr = sort(arr);
    
}