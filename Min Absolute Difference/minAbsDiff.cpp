#include<iostream>
#include<vector>
#include<algorithm>
#include <cstdlib>
using namespace std;

void intAbsDiff(vector<int> A, vector<int> B){
    int n=A.size();
    vector<int> diff(n);
    for(int i=0;i<n;i++){
        diff[i] = abs(A[i]-B[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=diff[i];
    }
    cout<<"Sum : "<<sum<<endl;
}

int main(){
    vector<int> A={4,1,8,7};
    vector<int> B={2,3,6,5};
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    intAbsDiff(A,B);
    return 0;
}