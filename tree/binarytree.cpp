#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data =d;
        this->left=NULL;
        this->right=NULL;
    }
};
    node* buildtree(node *root)
    {
         cout<<"Enter data for inserting"<<endl;
        int data;
       
        cin>>data;
        root=new node(data);
        if(data==-1){
            return NULL;

        }
        cout<<"Enter data for left"<<data<<endl;
        root->left=buildtree(root->left);
        cout<<"enter data for right"<<data<<endl;
        root->right=buildtree(root->right);
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

    
    
    
    
    void reverselevelorder(node* root){
       
       queue<node*>q;
        stack<node*>s;
        
        q.push(root);

    while(!q.empty()){
        root=q.front();
        q.pop();
        s.push(root);
        if(root->left)
        q.push(root->left);
        if(root->right)
        q.push(root->right);
    }
    while(!s.empty()){
        root=s.top();
        cout<<root->data<<" ";
        s.pop(); 
    }

    
    }

    void inorder(node* root){
        if(root==NULL)return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }
    void preorder(node* root){
        if (root==NULL)return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(node * root){
        if(root==NULL)return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    void buildlevelorder(node * &root){
        queue<node*>q;
        cout<<"Enter data for root"<<endl;  
        int data;
        cin>>data;
        root=new node(data);
        q.push(root);
      
        while(!q.empty()){
            node*temp=q.front();
            q.pop();
            cout<<"Enter left Node"<<" "<<temp->data<<endl;
            int leftdata;
            cin>>leftdata;
            if(leftdata!=-1){
                temp->left=new node(leftdata);
                q.push(temp->left);
            }
            cout<<"Enter right Node"<<" "<<temp->data<<endl;
            int rightdata;
            cin>>rightdata;
            if(rightdata!=-1){
                temp->right=new node(leftdata);
                q.push(temp->right);
            }        



        }


    }


//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1  -1

int main(){
node* root=NULL;
buildlevelorder(root);
levelorderedtraversal(root);
//build tree
// root=buildtree(root);

// //levelorderedtraversal(root);


// reverselevelorder(root);
// cout<<endl;
inorder(root);
// cout<<endl;
// preorder(root);
// cout<<endl;
// postorder(root);

   
}
//1 3 7 -1 -1 11 -1 -1 5 12 -1 -1 -1
