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
void levelOrder(Node* root){
    queue<Node*> Q;
    if(root ==NULL){
        return;
    }
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
        if(curr == NULL){
            cout<<endl;
           

            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        }else{
            cout<<curr->data<<" ";
            if(curr->left !=NULL){
                Q.push(curr->left);
            }
            if(curr->right !=NULL){
                Q.push(curr->right);
            }
        }
       
    }
}


int SumTree(Node* root){
    if(root==NULL){
        return 0;
    }


    int left = SumTree(root->left);
    int right = SumTree(root->right);
    int curr = root ->data;
    root->data = left + right;
    return curr+left+right;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    SumTree(root);
    levelOrder(root);
    return 0;

}