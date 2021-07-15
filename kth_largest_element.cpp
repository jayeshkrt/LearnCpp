// find the kth largest or smallest element in unsorted array
// https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

// Quicksort
// nlogn complexity
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int partition(int *arr, int start, int end){
    int pivot = arr[end];
    int partition_index=start;
    for(int i = start; i<end; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[partition_index]);
            partition_index++;
        }
    }
    swap(arr[end], arr[partition_index]);
    return partition_index;
}

void quicksort(int *arr, int start, int end){
    if(start<end){
        int partition_index = partition(arr, start, end);
        quicksort(arr, start, partition_index-1);
        quicksort(arr, partition_index+1, end);
    }
}

// method 2
int kthSmallest(int *arr, int n, int k){
    sort(arr, arr[n]);
    return arr[k+1];
}

// method 3
// use this approach only when all elements in array are distinct
int vectorApproach(int *arr, int n, int k){
    set<int> s(arr, arr+n);
    set<int>::iterator itr = s.begin();
    advance(itr, k-1);
    return *itr;
}

// method 4


int main(){
    int arr[]={1,2,3,4,5,6,7,0,28,27,30,39,35};
    // method 1
    quicksort(arr, 0, sizeof(arr)/sizeof(arr[0]));
    cout << arr[k-1] << "\n";
}