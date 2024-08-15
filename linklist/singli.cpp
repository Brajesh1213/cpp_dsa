#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;

        }
    }
};
void  insertAtHead(Node * &head,int d){
    //new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;    

}
void insertInBetween(Node* &tail, Node* &head ,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
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
    Node * nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;


}
void DeletePostion(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{

    Node* current=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt< position){
        prev=current;
        current=current->next;
        cnt++;
    }
    prev->next=current->next;
    current->next=NULL;
    
    delete current;
    if(prev->next==NULL)
    {
        tail=prev;
    }
    
    

    }
    


}


void print(Node* &head){
 Node* temp=head;
 while(temp !=NULL){
    cout<<temp->data<<" ";
   temp = temp->next;
 }cout<<endl;
 

}

int main(){
   Node * node1=new Node(10);
    
    
    Node* head=node1;
    Node*tail=node1;
    print(head);
    insertAtHead(head,12);
     insertAtTail(tail,20);
   
    print(head);
    insertAtHead(head,15);
    print(head);
    insertInBetween(tail,head,3,345);
    print(head);
    DeletePostion(head,tail,5);
    print(head);
   cout<<tail->data<<endl;
   cout<<head->data<<endl;
   
    return 0;


} 