#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Heap{
    vector<int> heap;
    void heapify(int idx){
        if(heap.size()==0) return;
        int n=idx;
        int ln=2*n+1;
        int rn=2*n+2;
        if(ln <heap.size() && heap[n]<heap[ln]){
            n=ln;
        }
        if(rn <heap.size() && heap[n]<heap[rn]){
            n=rn;
        }
        swap(heap[idx],heap[n]);
        if(n!=idx){
            heapify(n);
        }
    }
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

    void pop(){
        swap(heap[0],heap[heap.size()-1]);
        heap.pop_back();
        heapify(0);
    }
    
    int top(){
        return heap[0];
    }
};

int main(){
    Heap h;
    h.push(9);
    h.push(4);
    h.push(8);
    h.push(1);
    h.push(2);
    h.push(5);
    cout<<h.top()<<endl;
    h.pop();
    cout<<h.top()<<endl;
    h.pop();
    cout<<h.top()<<endl;
    h.pop();
    cout<<h.top()<<endl;
    h.pop();
    cout<<h.top()<<endl;
    h.pop();
    cout<<h.top()<<endl;

    return 0;
}