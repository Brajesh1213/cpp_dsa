#include<bits/stdc++.h>
using namespace std;

class node{
    int data;
    node* right;
    node* left;
    node(){
        this ->data=data;
        this->right=NULL;
        this->left=NULL;
    }

}

void rectreecall(node * root){
    if( root==-1)
    return NULL;
    rectreecall(node->left)
    cout<<data;
    rectreecall(root->right);
        
    

}


int main(){
    node* root=new node;
    rectreecall(node);

}