#include<bits/stdc++.h>
using namespace std; 
class Node{
public:
int data;
Node *prev;
Node* next;
Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}
~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory is free  = "<<value<<endl;
}

};

void insertAthead(Node * &head ,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail ,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail->prev=temp;
    tail=temp;
     

}
void InBetween(Node* &tail,Node* head,int position,int d){
if(position==1){
    insertAthead(head,d);
    return;

}
else{
    Node* temp=head;
    int cnt=1;
     while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    }

}
void deletenNode(Node* &head,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt< position){
        prev=curr;
        curr=curr->next;    
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    }

}








void print(Node * &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }cout<<endl;
}
int getlength(Node * &head){
    Node * temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
   // cout<<getlength(head);
    insertAthead(head,19);
    insertAtTail(tail,99);
    InBetween(tail,head,4,89);
    print(head);
    deletenNode(head,4 );
    print(head);

}