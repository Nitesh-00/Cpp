#include<iostream>
#include<queue>
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
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
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
int height(Node* root){
    if(root ==NULL){
        return 0;
    }
    int lH = height(root->left);
    int rH = height(root->right);
    int currH = max(lH,rH) +1;
    return currH;
}
int countNode(Node* root){
    if(root ==NULL){
        return 0;
    }
    int leftcount = countNode(root -> left);
    int rightcount = countNode(root -> right);
    int con = leftcount + rightcount + 1;
    return con;
}

int nodeSum(Node* root){
    if(root ==NULL){
        return 0;
    }
    int ls = nodeSum(root -> left);
    int rs = nodeSum(root -> right);
    int sum = ls+rs+root ->data;
    return sum;
}
int diaTree(Node* root){
    if(root ==NULL){
        return 0;
    }
    int rootDia = height(root-> left) +height(root-> right) + 1;
    int lD = diaTree(root->left);
    int rD = diaTree(root->right);

    return max(rootDia,max(lD,rD));

}

bool isIdentical(Node* root1,Node* root2){
    if(root1== NULL && root2==NULL){
        return true;
    }else if(root1 ==NULL || root2 == NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    return isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right);

}

bool isSubTree(Node* root,Node* subRoot){
    if(root==NULL & subRoot==NULL){
        return true;
    }else if(root ==NULL || subRoot == NULL){
        return false;
    }
    if(root->data == subRoot->data){
        if(isIdentical(root,subRoot)){
            return true;
        }
    }

    int isLeftSubTree = isSubTree(root->left,subRoot);
    if(!isLeftSubTree){
        return isSubTree(root->right,subRoot);
    }
    

    return true;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);
    subRoot->right = new Node(5);
    cout<<isSubTree(root,subRoot)<<endl;
    return 0;

}