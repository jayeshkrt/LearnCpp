// implementation of quick sort in cpp
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int partition(int *arr, int start, int end){
    int pivot = arr[end];

    int partitionIndex = start;
    for (int i = start; i < end; i++){
        if (arr[i]<=pivot){
            swap(arr[i], arr[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(arr[partitionIndex], arr[end]);
    return partitionIndex;
}

void quicksort(int *arr, int start, int end){
    if(start<end){
        int partitionIndex = partition(arr, start, end);
        quicksort(arr, start, partitionIndex-1);
        quicksort(arr, partitionIndex+1, end);
    }
}

int main(){
    int arr[] = {1,3,2,6,4,7,4,7,98,54,84,32,87,54};
    int len = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, len-1);
    for(int i=0;i<len;i++){cout<<arr[i]<<" ";} 
}