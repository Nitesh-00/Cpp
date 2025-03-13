#include<iostream>
#include<stack>
using namespace std;


class Queue{
    stack<int> s1;
    stack<int> s2;
    public:
        void push(int data){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(data);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        void pop(){
            if(s1.empty()){
                cout<<"Queue is Empty"<<endl;
                return ;
            }
            s1.pop();
        }
        int front(){
            return s1.top();
        }
        bool empty(){
            return s1.empty();
        }
};
int main(){
    Queue q;
    q.push(3);
    q.push(5);
    q.push(6);
    q.push(8);
    cout<<"Front element: "<<q.front()<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}