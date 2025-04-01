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

int KthAnc(Node* root,int node, int K){
    if(root==NULL){
        return -1;
    }

    if(root->data == node){
        return 1;
    }

    int left = KthAnc(root->left,node,K);
    int right = KthAnc(root->right,node,K);

    if(left == -1 && right == -1){
        return -1;
    }

    int  valid = left == -1 ? right : left;
    if(valid == K){
        cout<<"Kth Ancestor: "<<root->data<<endl;
    }

    return valid + 1;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    KthAnc(root,6,1);
    return 0;

}