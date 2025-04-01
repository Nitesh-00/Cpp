#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            this->left =NULL;
            this->right =NULL;
        }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode-> left = buildTree(nodes);
    currNode-> right = buildTree(nodes);
    return currNode;
}

void KthLevel(Node* root,int k,int l){
    if(root==NULL){
        return;
    }
    if(k==l){
        cout<<root->data<<" ";
        return;
    }else{
        l++;
    }
    KthLevel(root->left,k,l);
    KthLevel(root->right,k,l);
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    KthLevel(root,3,1);
    vector<int> arr = {1,2,3};
    int x = arr.back();
    cout<<x;

    return 0;

}