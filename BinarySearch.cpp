#include<iostream>
using namespace std;
void sort(int (&arr)[6]){
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

bool binarySearch(int (&arr)[6],int low,int high,int key){
    if (low > high) {
        return false;
    }
    int mid = low + (high -low)/2;
    if(arr[mid]==key){
        return true;
    }else if(arr[mid]<key){
        return binarySearch(arr,mid+1,high,key);
    }else{
        return binarySearch(arr,low,mid-1,key);
    }
    return false;
}

int main(){
    int arr[6] = {3,2,5,7,1,4};
    sort(arr);
    cout<<(binarySearch(arr,0,8,9) ? "Found" : "Not Found")<<endl;

    return 0;
}