#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Heap{
    vector<int> heap;
public:
    void push(int val){
        heap.push_back(val);
        int child = heap.size()-1;
        int parnt = (child-1)/2;
        while(parnt>=0 && heap[child]>heap[parnt])
        {
            swap(heap[child],heap[parnt]);
            child=parnt;
            parnt=(child-1)/2;
        }
    }
    
    int top(){
        return heap[0];
    }
};

int main(){
    Heap h;
    h.push(7);
    h.push(8);
    h.push(3);
    h.push(10);
    cout<<h.top()<<" ";
    return 0;
}