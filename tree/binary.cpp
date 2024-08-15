#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
node *builtTree(node * root){
      cout<<"Enter data for inserting"<<endl;
        int data;
       
        cin>>data;
        root=new node(data);
        if(data==-1){
            return NULL;

        }
        cout<<"Enter data for left = "<<data<<endl;
        root->left=builtTree(root->left);
        cout<<"enter data for right = "<<data<<endl;
        root->right=builtTree(root->right);
        return root; 

}
 void levelorderedtraversal(node* root){
         queue<node*>q;
         q.push(root);
         q.push(NULL);
         while(!q.empty()){
            node* temp=q.front();
            q.pop();

            if(temp==NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                cout<<temp->data<<" ";
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }

         }
    }

    
   


int main(){
    node* root=NULL;
    // builtTree(root);
    levelorderedtraversal(root);

    
//1 3 7 -1 -1 11 -1 -1 5 12 -1 -1 -1
}