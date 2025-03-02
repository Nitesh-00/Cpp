#include<iostream>
using namespace std;

class Example{
    int a;
    int b;
    public:
        Example(int x, int y);
        void sum(){
            cout<<"The sum is: "<<a+b<<endl;
        }
};

Example :: Example(int x, int y){
    a =x;
    b =y;
}
int main(){
    Example e(2,3);
    e.sum();
    return 0;
}