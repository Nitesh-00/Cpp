#include<iostream>
using namespace std;
#include<vector>

int ClimbStairRec(int n){
    if(n==0 || n==1){
        return 1;
    }

    return ClimbStairRec(n-1) + ClimbStairRec(n-2);
}

int ClimbStairMem(vector<int> &dp, int n){
    if(n==0 || n==1){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = ClimbStairMem(dp,n-1) + ClimbStairMem(dp,n-2);
    return dp[n];
}

int main(){
    int n=4;
    vector<int> dp(n+1,-1);
    cout<<ClimbStairMem(dp,n)<<endl;

    return 0;
}