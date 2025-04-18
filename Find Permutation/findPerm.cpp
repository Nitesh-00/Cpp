#include<iostream>
#include<string>
using namespace std;

void permutations(string str,string ans){
    if(str.size()==0){
        cout<<ans<<"\n";
        return;
    }
    int n=str.size();
    for(int i=0;i<n;i++){
        char ch = str[i];
        string next = str.substr(0,i)+str.substr(i+1,n-i-1);
        permutations(next,ans+ch);
    }
    
    
}
int main(){

    string str="abc";
    string ans= "";
    permutations(str,ans);
    return 0;
}