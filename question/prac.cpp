// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node * next;
//     Node(int data ){
//         this->data=data;
//         this->next=NULL;

//     }
//     ~Node(){
//         int value = this->data;
//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;
//         }
//         cout<<"memory is free for data "<<value<<endl;
//     }


// };
// void InsertAtHead(Node * &head,int d){
//     Node * temp= new Node(d);
//     temp->next=head;
//     head=temp;

// }
// void InsertAtTail(Node*  &tail,int d){
//     Node *temp=new Node(d);
//     tail->next=temp;
//     tail=temp;
//     /*
//       Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;    

//     */
// }
// void inBetweetn(Node* &tail,Node* &head,int position,int d){
//     if(position==1){
//         InsertAtHead(head,d);
//         return;
//     }
//     Node *temp=head;
//     int cnt=1;
//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }
//     Node* nodeToInsert=new Node(d);
    
//     nodeToInsert->next=temp->next;
//     temp->next=nodeToInsert;
//     if(temp->next==NULL){
//         InsertAtTail(tail,d);
//         return;
//     }



// }
// void deleteNode(Node* & head,int position){
//     if(position==1){
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//     }
    
//     else{
//         Node *current=head;
//         Node *previos=NULL;
//         int cnt=1;
//         while(cnt< position){
//             previos=current;
//             current=current->next;
//             cnt++;
//         }
//         previos->next=current->next;
//         current->next=NULL;
//         delete current;


//     }
// }

// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }cout<<endl;
//     /*
//      Node* temp=head;
//  while(temp !=NULL){
//     cout<<temp->data<<" ";
//    temp = temp->next;
//  }cout<<endl;
//     */
// }
// int main(){
//     Node * node1=new Node(10);
    
    
//     Node* head=node1;
//     Node* tail=node1;
//     InsertAtTail(tail,23);
//     print(head);
    
//     InsertAtHead(head,12);
//     print(head);
//     inBetweetn(tail,head,3,45);
//     print(head);
//     deleteNode(head,2);
//     print(head);


// }
// #include <bits/stdc++.h>
// using namespace std;

 
// int main()
// {
//     int t;cin>>t;while(t--){
//    int n;cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){cin>>a[i];
   
//    }
//    int cod=0,cen=0;
//    for(int i=0;i<n;++i){
//     if(a[i]&1)cod++;
//     else cen++;
//    }
   

//    if(n==1){
//     cout<<1<<endl;
//    }
//    else{
//   int  gcd=a[0];
//    for(int i=0;i<n;i++){
//     gcd=__gcd(a[i],gcd);

//    }
//    if(gcd==1){
//     if(cod==n) cout<<0<<endl;   

//    else if(cod>=1 and cen>=1)cout<<cod<<endl;

   



    
//    }
   
//    else{
//     cout<<n<<endl;
//    }

//    }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
   
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(){
    int arr[5]={2,3,5,4,11};
    vector<int>v;
    for (int  i = 0; i < 5; i++)
    {
        if(isPrime(arr[i])==true){
            v.push_back(arr[i]);
        }



    }
    for(auto i: v)cout<<i<<" ";
    
}