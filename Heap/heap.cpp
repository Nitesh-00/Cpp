#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

class Student{
    
public:
    string name;
    int marks;
    Student(string name, int marks){
        this->name=name;
        this->marks=marks;
    }

    bool operator < (const Student&obj) const{
        return this->marks>obj.marks;
    }
};

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
    // Heap h;
    // h.push(9);
    // h.push(4);
    // h.push(8);
    // h.push(1);
    // h.push(2);
    // h.push(5);
    // cout<<h.top()<<endl;
    // h.pop();
    // cout<<h.top()<<endl;
    // h.pop();
    // cout<<h.top()<<endl;
    // h.pop();
    // cout<<h.top()<<endl;
    // h.pop();
    // cout<<h.top()<<endl;
    // h.pop();
    // cout<<h.top()<<endl;

    priority_queue<Student> pq;
    pq.push(Student("aman",91));
    pq.push(Student("nitesh",99));
    pq.push(Student("rahul",85));
    while(!pq.empty()){
        cout<<"top :"<<pq.top().name<<", "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}