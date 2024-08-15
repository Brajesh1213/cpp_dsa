// // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // using namespace std;
// // // // // // // // // class Node{
// // // // // // // // //     public:
// // // // // // // // // Node* next;
// // // // // // // // // int data;
// // // // // // // // // Node(int data){
// // // // // // // // //     this->data=data;
// // // // // // // // //     this->next=NULL;
// // // // // // // // // }

// // // // // // // // // };

// // // // // // // // //     void  insertAtHead(Node * &head,int d){
// // // // // // // // //     //new node
// // // // // // // // //     Node* temp=new Node(d);
// // // // // // // // //     temp->next=head;
// // // // // // // // //     head=temp;


// // // // // // // // // }
// // // // // // // // // void print(Node * &head){
// // // // // // // // //      Node* temp=head;
// // // // // // // // //  while(temp !=NULL){
// // // // // // // // //     cout<<temp->data<<" ";
// // // // // // // // //    temp = temp->next;
// // // // // // // // //  }cout<<endl;

// // // // // // // // // }
// // // // // // // // // void reversefun(Node* &head){
// // // // // // // // //     Node* curr=head;
// // // // // // // // //     Node*prev=NULL;
// // // // // // // // //     while(curr!=NULL){
// // // // // // // // //     Node* forward=curr->next;
// // // // // // // // //     prev=curr->next;
// // // // // // // // //     prev=curr;
// // // // // // // // //     curr=forward;


      
// // // // // // // // //     }
// // // // // // // // //    // return prev;

// // // // // // // // // }

// // // // // // // // // int main(){

// // // // // // // // //    Node * node1=new Node(10);
    
    
// // // // // // // // //     Node* head=node1;
// // // // // // // // //   //  Node*tail=node1;
// // // // // // // // //     print(head);
// // // // // // // // //     insertAtHead(head,12);
// // // // // // // // //     print(head);



// // // // // // // // // }
// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // int main(){
// // // // // // // //     int n;cin>>n;
// // // // // // // //     int a[n];
// // // // // // // //     for(int i=0;i<n;i++)cin>>a[i];
// // // // // // // //     sort(a,a+n);
// // // // // // // //     int j;
// // // // // // // //     int i=0;
// // // // // // // //     int count=0;
// // // // // // // //     map<int,int>mp;

// // // // // // // //     while(i<n){
// // // // // // // //         j = 0;
// // // // // // // //       //  if(mp.find(a[i]) == mp.end()){
// // // // // // // //         while(j<i){
// // // // // // // //             if(a[i]%a[j]== 0){
// // // // // // // //                 mp[a[i]]++;
                
// // // // // // // //                 count ++;
// // // // // // // //                 break;
                
// // // // // // // //             }
           
        
// // // // // // // //         else{
// // // // // // // //             break;
// // // // // // // //         } 
// // // // // // // //         j++;
// // // // // // // //         i ++;
// // // // // // // //         }
// // // // // // // // //     }
// // // // // // // // //     cout<<count;
// // // // // // // // // }
// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // void solve(){
// // // // // // // //     int n,m;cin>>n>>m;
// // // // // // // //     int x,y,a,b;
// // // // // // // //     cin>>x>>y>>a>>b;
// // // // // // // //     int ans=0;
// // // // // // // //     if((x==1 and y==1)or (a==1 and b==1)or(x==n and y==m)or(a==n and b==m)or(x==1 and y==m)or(a==1 and b==m)or(x==n and y==1)or(a==n and b==1))ans=2;
// // // // // // // //     else if(x==1 or x==n or a==1 or a==n or y==1 or b==1 or b==m or b==m)ans=3;
// // // // // // // //     else ans=4;
// // // // // // // //     int tab=min(n,m);
// // // // // // // //     tab=min(ans,tab);
// // // // // // // //     cout<<tab<<endl;
// // // // // // // // }

// // // // // // // // int main(){
// // // // // // // //     int t;cin>>t;while(t--){
// // // // // // // //         solve();
// // // // // // // //     }
// // // // // // // // }
// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // #define ll long long int
// // // // // // // int main(){
// // // // // // //     int t;cin>>t;while(t--){

// // // // // // // ll  i,j,k,n,m;
// // // // // // //   cin>>n;
// // // // // // // vector< vector<long long>>ans(2 , vector<long long>(n));
// // // // // // // ll mx=2*n;
// // // // // // // ans[0][0]=mx;
// // // // // // // ans[1][n-1]=mx-1;
// // // // // // // ll front =1,back=mx-2;
// // // // // // // for(int i=0;i<n-1;i++){
// // // // // // // if(i&1){
// // // // // // //     ans[1][i]=back-1;
// // // // // // //     ans[0][i+1]=back;
// // // // // // //     back-=2;
// // // // // // // }
// // // // // // // else {
// // // // // // //     ans[1][i]=front;
// // // // // // //     ans[0][i+1]=front+1;
// // // // // // //     front+=2;

// // // // // // // }
// // // // // // // for(i=0;i<2;i++){
// // // // // // //     for(j=0;j<n;j++){
// // // // // // //         cout<<ans[i][j]<<" ";
// // // // // // //     }
// // // // // // //     cout<<endl;
// // // // // // // }

// // // // // // // }
       

// // // // // // //     }
// // // // // // // }
// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     int a,b,c;
// // // // // //     cin>>a>>b>>c;
    
// // // // // //      char prev = '0';
// // // // // //         vector<int> v = {a, b, c};

// // // // // //         string ans;

// // // // // //         while (1) {
// // // // // //             int ma = 0;
// // // // // //             char cur;

// // // // // //             for (int i = 0; i < 3; i++)
// // // // // //                 if (prev != char(i + 'a') && ma < v[i])
// // // // // //                     ma = v[i], cur = i + 'a';

// // // // // //             if (ma == 0)
// // // // // //                 break;

// // // // // //             ans += cur;
// // // // // //             v[cur - 'a']--;
// // // // // //             if (ma >= 2 && (prev == '0' || ma > v[prev - 'a'])) {
// // // // // //                 ans += cur;
// // // // // //                 v[cur - 'a']--;
// // // // // //             }
// // // // // //             prev = cur;
// // // // // //         }
// // // // // //         int n=ans.length();
// // // // // //         if(n!=a+b+c) return -1;
// // // // // //         cout<<n;


   


// // // // // // }
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // int main(){
// // // // //   int n;
// // // // //   cin>>n;
// // // // //   int a[n],b[n];
// // // // //   for(int i=0;i<n;i++)cin>>a[i];
  
// // // // //   for(int i=0;i<n;i++)cin>>b[i];

// // // // //     sort(a,a+n);
// // // // //     sort(b,b+n);

// // // // //     int ans=1;
// // // // //     int cnt=0;
// // // // //     int j=0,i=1;
// // // // //    while(i<n){
// // // // //     if(a[i]<=b[i]){
// // // // //         cnt++;
// // // // //         ans=max(cnt,ans);
// // // // //     }
// // // // //     else{
    
// // // // //         cnt--;
// // // // //         j++;
// // // // //     }
// // // // //     i++;

// // // // //    }
// // // // // cout<<ans;


// // // // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;

 
// // // int main()
// // // {
// // //     int t;cin>>t;while(t--){
// // //    int n;cin>>n;
// // //    int a[n];
// // //    for(int i=0;i<n;i++){cin>>a[i];
   
// // //    }
// // //    int cod=0,cen=0;
// // //    for(int i=0;i<n;++i){
// // //     if(a[i]&1)cod++;
// // //     else cen++;
// // //    }
   

// // //    if(n==1){
// // //     cout<<1<<endl;
// // //    }
// // //    else{
// // //   int  gcd=a[0];
// // //    for(int i=0;i<n;i++){
// // //     gcd=__gcd(a[i],gcd);

// // //    }
// // //    if(gcd==1){
// // //     if(cod==n) cout<<0<<endl;   

// // //    else if(cod>=1 and cen>=1)cout<<cod<<endl;

   



    
// // //    }
   
// // //    else{
// // //     cout<<n<<endl;
// // //    }

// // //    }
// // //     }
// // // }
// // #include <bits/stdc++.h>
// // #define h long long
// // using namespace std;

// // int main() 
// // {
// // 	int t;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 	    int n;
// // 	    cin>>n;
// // 	    vector<int>v;
// // 	    for(int i=0;i<n;i++)
// // 	    {
// // 	        int k;
// // 	        cin>>k;
// // 	        v.push_back(k);
// // 	    }
// // 	    vector<int>b,a;
// // 	    int f=v[0];
// // 	    //b.push_back(v[0]);
// // 	    for(int i=0;i<n;i++){
// // 	       b.push_back(__gcd(f,v[i]));
// // 	       f=__gcd(f,v[i]);
// // 	    } 
// // 	    //a.push_back(v[n-1]);
// // 	    f=v[n-1];
// // 	    for(int i=n-1;i>=0;i--){
// // 	        a.push_back(__gcd(f,v[i]));
	    
// // 	        f=__gcd(f,v[i]);
// // 	    }
// // 	    reverse(a.begin(),a.end());
// // for(auto i:a)cout<<i<<" ";

// // cout<<endl;
// // for(auto i:b)cout<<i<<" ";


// // 	   int count=0;cout<<endl;
// // 	   for(int i=1;i<n-1;i++)
// // 	   {
// // 	       if(__gcd(b[i-1],a[i+1])!=1)
// // 	           count++;
// // 	   }
// // 	   if(b[n-2]!=1)
// // 	   count++;
// // 	   if(a[1]!=1)
// // 	   count++;
	   
// // 	   cout<<count<<endl;
// // 	}
// // 	return 0;
// // }
// #include <iostream>
// using namespace std;

// int main() {
// 	int t;cin>>t;while(t--){

	    
// 	        int n;
// 	        cin>>n;
//             int a[n];
// 	        for(int i=0;i<n;i++)cin>>a[i];
	        
// 	        int sum=0,cnt=0;
//             for(int i=0;i<n;i++){
//                 sum+=a[i];
//                 if(sum==i+1)cnt++;
//             }
	        
	       
// 	    cout<<cnt<<endl;
	
//         }
// }
#include <iostream>
using namespace std;
#define ll long long int

int main() {
	ll t;cin>>t;while(t--){
	    string x;
        cin>>x;
	
        int k=20;
        int ans=0;
	    for(int i=0;i<x.size();i++){
            ans= (ans*10 +(x[i]-'0'))%k;
        }
        cout<<ans<<endl;
	    
	    
	}
	return 0;
}
