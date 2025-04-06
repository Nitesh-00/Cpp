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

int ClimbStairTab(vector<int> &dp, int n){
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2;i<n+1;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main(){
    int n=5;
    vector<int> dp(n+1,-1);
    cout<<ClimbStairTab(dp,n)<<endl;

    return 0;
}