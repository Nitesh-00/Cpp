#include<iostream>
using namespace std;

int main()
{
    // int a=5;
    // int* p =&a;

    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The address of a is: "<<p<<endl;
    // cout<<"The address of a is: "<<&a<<endl;
    // cout<<"The address of p is: "<<&p<<endl;
    // cout<<"The value of a is: "<<*p<<endl;
    
    // int** c = &p;
    // cout<<"The address of p is: "<<&p<<endl;
    // cout<<"The address of p is: "<<c<<endl;
    // cout<<"The address of c is: "<<&c<<endl;
    // cout<<"The adress of a is: "<<*c<<endl;
    // cout<<"The value of a is: "<<**c<<endl;

    int marks[] = {23,25,27,29};
    int* p = marks;
    cout<<"The address of marks[0] is: "<<p<<endl;
    cout<<"The value at marks[0] is: "<<*p<<endl;
    cout<<"The address of marks[1] is: "<<p+1<<endl;
    cout<<"The value at marks[1] is: "<<*(p+1)<<endl;
    return 0;
}
