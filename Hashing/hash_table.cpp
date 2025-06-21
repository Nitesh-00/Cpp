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
    int currSize=0;
    Node**table;
    int hashFunct(string key){
        int idx = 0;
        for(int i=0;i<key.size();i++){
            idx=(idx+key[i]*key[i])%totSize;
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
        newNode->next=table[idx];
        table[idx]=newNode;
        currSize++;
    }
    void display(){
        for(int i=0;i<totSize;i++){
            Node* temp=table[i];
            while(temp!=NULL){
                cout<<"("<<temp->key<<","<<temp->value<<")"<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }
    
};

int main(){
    HashTable ht(5);
    ht.insert("India",150);
    ht.insert("China",250);
    ht.insert("Usa",50);
    ht.insert("Japan",10);
    ht.insert("Korea",20);
    ht.display();
    return 0;
}