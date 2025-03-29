#include<iostream>
#include<queue>
#include<map>
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

Node* LCA2(Node* root,int n1, int n2){
    if(root ==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data ==n2){
        return root;
    }
    Node* left = LCA2(root->left,n1,n2);
    Node* right = LCA2(root->right,n1,n2);

    if(left !=NULL && right !=NULL){
        return root;
    }
    return left ==NULL ? right : left;

}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"LCA=" <<LCA2(root,4,5)->data<<endl;
    return 0;

}