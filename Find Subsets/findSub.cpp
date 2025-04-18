#include<iostream>
#include<string>
using namespace std;

void subSets(string str,string subStr){
    if(str.size()==0){
        cout<<subStr<<",";
        return;
    }
    char ch = str[0];
    subSets(str.substr(1,str.size()-1),subStr+ch);
    subSets(str.substr(1,str.size()-1),subStr);
}
int main(){

    string str="abc";
    string subStr= "";
    subSets(str,subStr);
    return 0;
}