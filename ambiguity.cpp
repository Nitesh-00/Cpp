#include<iostream>
using namespace std;

class Base{
    int a , b;
    public : 
       Base give(){
        return *this;
       }

       void show(int x, int y){
            a=x;
            b=y;
            cout<<"a,b : "<<a<<","<<b<<endl;
       }

};

int main() {
   Base b;
   b.give().show(5,4);
   
}
