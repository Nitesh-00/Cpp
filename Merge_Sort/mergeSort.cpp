#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int si,int ei,int mid){
    vector<int> temp;
    int i=si;
    int j=mid+1;
    while(i<=mid && j<=ei ){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    for(int i=si,x=0;i<=ei;i++){
        arr[i]=temp[x++];
    }
}

void mergeSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid = si + (ei-si)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,ei,mid);
    
}



int main(){
    int arr[]={6,3,7,4,2,5};
    int n = sizeof(arr)/4;
    mergeSort(arr,0,n-1);
    for(int i=0;i<=n-1;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}