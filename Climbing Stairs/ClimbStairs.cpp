#include<iostream>
using namespace std;

int ClimbStairRec(int n){
    if(n==0 || n==1){
        return 1;
    }

    return ClimbStairRec(n-1) + ClimbStairRec(n-2);
}

int main(){
    cout<<"Ways : "<<ClimbStairRec(4)<<endl;
    return 0;
}