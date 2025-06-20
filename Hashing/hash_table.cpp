#include<iostream>
#include<string>
using namespace std;

class Node{
    
public:
    string key;
    int value;
    Node* next;
    Node(string key,int val){
        this->key=key;
        this->value=val;
    }
};

class HashTable{
    int totSize;
    Node**table;
    int hashFunct(string key){
        int idx = 0;
        for(int i=0;i<key.size();i++){
            idx=idx+(key[i]%key[i])%totSize;
        }
        return idx;
    }
public :
    HashTable(int size){
        totSize=size;
        table=new Node*[totSize];
        for(int i=0;i<totSize;i++){
            table[i]=NULL;
        }
    }
    void insert(string key,int val){
        int idx=hashFunct(key);
        Node* newNode = new Node(key,val);
    }
};

int main(){
    HashTable ht(5);
    return 0;
}