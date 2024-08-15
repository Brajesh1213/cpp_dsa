#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
Node* next;
int data;
Node(int data){
    this->data=data;
    this->next=NULL;

}
~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        next=NULL;

    }
}
};

void  insertNode(Node* & tail,int element ,int d){
  if(tail==NULL){
    Node* newNode=new Node(d);
    tail=newNode;
    tail->next=newNode;
  }
  
  else{
    Node* curr=tail;
    while(curr->data!=element){
        curr=curr->next;
    }
        Node *temp=new Node(d);

    temp->next=curr->next;
    curr->next=temp;



  }

}


void deletion(Node* &tail,int element){
    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return;
    }
    else{
     Node* prev=tail;
     Node* curr=tail->next;
     while(curr->data!=element){
        prev=curr;
        curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
        

}
void print(Node* &tail){
    

    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail->next!=temp);

}


int main(){

Node* tail=NULL;

insertNode(tail,0,3);
print(tail);
insertNode(tail,3,7);
print(tail);
insertNode(tail,7,9);
insertNode(tail,7,70);
print(tail);


deletion(tail,7);

print(tail);
}