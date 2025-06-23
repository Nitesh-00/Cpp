#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int> &arr,int i,int n){
    int l=2*i+1;
    int r=2*i+2;
    int m=i;
    if(l<n && arr[m]<arr[l]){
        m=l;
    }
    if(r<n && arr[m]<arr[r]){
        m=r;
    }
    swap(arr[i],arr[m]);
    if( m!=i){
        heapify(arr,m,n);
    }
}

void heapSort(vector<int> &arr,int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }

    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);

    }
}

int main(){
    vector<int> arr = {1,4,2,5,3};
    int n=arr.size();
    heapSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}