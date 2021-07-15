// priority queue is called heap
// https://www.youtube.com/watch?v=AJdf2pR6G6A

#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

void swap(int *x, int *y);

// A class for min heap
class MinHeap{
    int *harr; // pointer to array of elements in heap
    int capacity; // maximum possible size of the heap
    int heap_size; // current number of elements in min heap

    public:
        // Constructor
        MinHeap(int capacity);

        // to heapify a subtree with the root at given index
        void MinHeapify(int );

        int parent(int i){ return (i-1)/2;}

        // to get index of left child of node at index i
        int left(int i){ return (2*i+1);}

        // to get index of right child of node at index i
        int right(int i){ return (2*i+1);}

        // to extract the root which is the minimum element
        int extractMin();

        // Decreases key value of key at index i to new_val
        void decreaseKey(int i, int new_val);

        // returns the minimum key (key at root fom min heap)
        int getMin(){ return harr[0];}

        // deletes a key stored at index i
        void deleteKey(int i);

        // inserts a new key 'k'
        void insertKey(int k);

};

// Constructor builds a heap from a given array a[] of given size
MinHeap::MinHeap(int cap){
    heap_size=0;
    capacity = cap;
    harr = new int[cap];
}

// inserts a new key 'k'
void MinHeap::insertKey(int k){
    if (heap_size==capacity){
        cout << "Overflow: Could not insertKey\n";
        return;
    }

    // first insert the new key at the end
    heap_size++;
    int i = heap_size-1;
    harr[i]=k;

    // fix the MinHeap property if it is violated
    while(i != 0 && harr[parent(i)] > harr[i] ){
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

// decreases value of key at index 'i' to new_val. It is assumed that
// new_val is smaller than harr[i]
void MinHeap::decreaseKey(int i, int new_val){
    harr[i] = new_val;
    while(i!=0 && harr[parent(i)] > harr[i]){
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

// method to remove the minimum element (or root) from min heap
int MinHeap::extractMin(){
    if(heap_size <= 0){
        return INT_MAX;
    }
    if(heap_size==1){
        heap_size--;
        return harr[0];
    }

    // store the minimum value, remove it from heap
    int root = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    MinHeapify(0);

    return root;
}

// this function deletes key at index i. It first reduced value to minus infinite
// then calls minExtract
void MinHeap::deleteKey(int i){
    decreaseKey(i, INT_MIN);
    extractMin();
}

// recursive method to heapify a subtree with the root at given index
// This method assumes that the subtrees are already heapified
void MinHeap::MinHeapify(int i){
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]){
        smallest = l;
    }
    if (r < heap_size && harr[r] < harr[smallest]){
        smallest = r;
    }
    if(smallest != i){
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}

// A utility function to swao two elements
void swap(int *x, int *y){
    int temp =*x;
    *x=*y;
    *y = temp;
}

int main(){
    // method 1
    MinHeap h(11);
    h.insertKey(24);
    h.insertKey(37);
    h.insertKey(31);
    h.insertKey(41);
    h.insertKey(1);
    h.insertKey(29);
    h.insertKey(37);

    h.deleteKey(2);

    cout << "minumum is: "<< h.extractMin()<<"\n";
    cout << "get min is: "<<h.getMin()<<"\n";
    h.decreaseKey(3,1);
    cout << "get min after decreaseKey(2,1)" << h.getMin()<<endl;



    priority_queue<int> pq1;    // max heap
    pq1.push(41);
    pq1.push(42);
    pq1.push(90);
    pq1.push(88);
    pq1.push(54);

    cout << "Is heap empty? :"<<pq1.empty()<<endl;

    cout << "Max element is: "<<pq1.top()<<"\n";
    pq1.pop();
    cout << "Max after pop is: "<<pq1.top()<<"\n";

    priority_queue<int, vector<int>, greater<int>> pq2;   // min heap
    pq2.push(90);
    cout << pq2.top();
}