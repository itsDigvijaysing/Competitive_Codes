#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=nullptr;
    }
};

int max_depth(Node* root){
    if(root == nullptr) return 0;
    int lh=max_depth(root->left);
    int rh=max_depth(root->right);
    return 1+max(lh,rh);
}

void bfs(Node* root){
    queue<Node*> que;
    que.push(root);
    struct Node* helper = root;
    while(!que.empty()){
        helper = que.front();
        cout<<helper->data<<" ";
        if(helper->left != nullptr) que.push(helper->left);
        if(helper->right != nullptr) que.push(helper->right);
        que.pop();
    }
    return;
}

void preorder(Node* root){
    if(root == nullptr){
        // cout<<endl;
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == nullptr){
        // cout<<endl;
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == nullptr){
        // cout<<endl;
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    int value[6]={1,2,3,4,5,6};
    struct Node* root = new Node(0);
    // cout<<"Give Tree Input 6"<<endl;
    // for(int i=0;i<6;i++){
    //     cin>>value[i];
    // }
    int i=0;
    root->data=value[i];
    root->left=new Node(value[++i]);
    root->right=new Node(value[++i]);
    root->left->left=new Node(value[++i]);
    root->left->right=new Node(value[++i]);
    root->right->left=new Node(value[++i]);

    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;
    cout<<"BFS: ";
    bfs(root);
    cout<<endl;
    cout<<"Depth: ";
    cout<<max_depth(root);
    cout<<endl;
    return 0;
}