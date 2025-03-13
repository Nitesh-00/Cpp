#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int cap;
    int currSize;
    int f,r;
public:
    Queue(int cap){
        this-> cap = cap;
        arr = new int[cap];
        currSize = 0;
        f = 0;
        r = -1;
    }
    void push(int data){
        if(currSize == cap){
            cout<<"Queue is Full !"<<endl;
            return ;
        }
        r = (r+1)%cap;
        arr[r]=data;
        currSize++;
    }
    void pop(){
        if(currSize ==0){
            cout<<"Queue is UnderFolw !"<<endl;
        }
        f = (f+1)%cap;
        currSize--;
    }
    int front(){
        if(currSize ==0){
            cout<<"Queue is Empty !"<<endl;
            return -1;
        }
        cout<<arr[f]<<endl;
    }

};

int main(){
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);  //queue is full
    q.pop();
    q.front();
    return 0;
}