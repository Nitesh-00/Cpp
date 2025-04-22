#include <iostream>       
using namespace std;

int occurence(int *arr,int k,int n,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==k){
        return i;
    }
    
    return occurence(arr,k,n,i+1);
    
}

int main () {
    int arr[] = {1,2,3,3,3,4,5};
    cout<<occurence(arr,4,7,0)<<endl;
    return 0;
}