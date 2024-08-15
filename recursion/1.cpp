// #include<bits/stdc++.h>
// using namespace std;

// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // void fact(int n){
// // // // if(n==0){
// // // //     return;
// // // // }
// // // // //cout<<n;
// // // // fact(n-1);
// // // // cout<<n<<endl;


// // // // }



// // // // int main(){
// // // // int n;;cin>>n;
// // // // fact(n);
// // // // }
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int reach(int n){
    
// // //   if(n==0)return 0;
// // //   if(n==1)return 1;
  
// // //   int k=reach(n-1)+reach(n-2);
// // //   return k;


    
  
   

// // // }
// // // int main(){
// // //     int n;
// // //     cin>>n;
  
// // //   cout<< reach(n);



// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // // int f(int n){
// // //     if(n<0 )return 0;
// // //     if(n==0)return 1;
// // //     int ans=f(n-1)+f(n-2);
// // //         cout<<ans<<" ";


// // //    // return ans;




// // // }
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //    f(n);
// // // // }
// // // string arr[10]={"zero ","one","two","three","four","five","six","seven","eight","nine"};
// // // void f(int n){
// // //     if(n==0)return;

// // //     int digit=n%10;
// // //     n=n/10;
// // //     f(n);
// // //         cout<<arr[digit]<<" ";



// // // }

// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     f(n);
// // // // }
// // // int f(int arr[],int n){
// // //     // if(n==1 or n==0)return true;
// // //     // if(arr[0]>arr[1])return false;
// // //     // else return true;
// // //     // bool ans =f(arr+1,n-1);
    
// // //     if(n==0)return 0;
// // //     if(n==1)return arr[0];
    
// // //     int rem=f(arr+1,n-1);
    
// // //    int sum=arr[0]+rem;
// // //     return sum;
    

// // // }
 
// // //  int main(){
// // //     int n;
// // //     cin>>n;
// // //     int arr[n];
// // //     for(int i=0;i<n;i++){
// // //         cin>>arr[i];
// // //     }
// // //    cout<< f(arr,n);
    
// // //  }

// // bool f(int arr[],int n,int key){
// //     if(n==0)return false;
// //     if(arr[0]==key)return true;
// //     else{
// //         bool rem= f(arr+1,n-1,key);
// //         return rem;

// //     }

// // }

// // int main(){
// //     int arr[6]={1,3 ,5,6,7,8};int n=6;
// //     int key=39;
// //     cout<<f(arr,n,key);

// // }

// // bool f(int arr[],int n,int l,int r ,int key){
// //     int mid=l+(r-l)/2;
// //     if(l>r)return false;
// //     if(arr[mid]==key)return true;
// //     if(arr[mid]>key)
// //      return  f(arr,n,l,mid-1,key);
    
// //     else  return f(arr,n,mid+1,r,key);

// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     int key=5;
// //     for(int i=0;i<n;i++)cin>>arr[i];
// //     if(f(arr,n,0,n,key))cout<<"yes";
// //     else cout<<"NO";

// // }
// // void f(string &s,int i,int j){
// //     if(i>j)
// //     return;

// //     swap(s[i],s[j]);
// //     i++;j--;
// //     f(s,i,j);




// // }

// // int main(){
// //     string s;
// //     cin>>s;
// //     f(s,0,s.size()-1);
// //     cout<<s;

// // }
// // bool f(string s,int i,int j){
// //     if(i>j)return true;

// //     if(s[i]!=s[j]){
// //         return false;
// //         i++;j--;
// //     }
// //     else{
// //     f(s,i+1,j-1);
// //     }
   

// // }

// //BUBBLE SORT

// //--------------------------------
// // int f(int a,int b=0){         |
// //     if(b==0)return 1;         | 
// //     int k=a*f(a,b-1);         |
// // }                             |
// // void f(int arr[],int n){      |
// // if(n==0 or n==1 )return;      |
//  //                              |
// // for(int i=0;i<n;i++)          |
// // if(arr[i]>arr[i+1]){          |
// //     swap(arr[i],arr[i+1]);    |
// // }                             |
// //     f(arr,n-1);               |
// //                               |
//    //                            |                  
// // }                             |
// //--------------------------------
// // void f(int arr[],int n){

// // }
// // int main(){
// //    int n;cin>>n;
// //    int arr[n];
// //    for(int i=0;i<n;i++)cin>>arr[i];
// //    f(arr,n);
// //    for(int i=0;i<n;i++){
// //     cout<<arr[i]<<" ";
// //    }

// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //    int n;cin>>n;int s;cin>>s;
// //    int arr[n];
// //    for(int i=0;i<n;i++)cin>>arr[i];
// //    int last=0;
// //    int start=0;
// //    int sum=0;
// //    bool flag=false;
// //    vector<int>res;
// //    for(int i=0;i<n;i++){
// //    sum+=arr[i];
// //    if(s<=sum){
// //       last=i;
// //    while(s<sum and start<last){
// //       sum-=arr[start];
// //       start++;
// //    }
// //    if(sum==s){
// //       res.push_back(start+1);
// //       res.push_back(last+1);
// //        flag = true;                    
// //       break;

// //    }


// //    }

// //    }
// //    if(flag==false){
// //       cout<<-1<<endl;
// //    }
// //    for(auto i:res){
// //       cout<<i<<" ";
// //    }
   
// // // }
// // void f(int arr[],int n,int i){
// //    if(i>=n)return;

// //    cout<<arr[i]<<" ";
// //    f(arr,n,i+1);
// // }
// // int f(int n,int p){


   
// //    if(n==0)return 1;
// //    int k=p*f(n-1,p);
// //    return k;

// //}
// // void f(int arr[],int n,int i,int &maxi){
// //    if(i>=n)return;
// //    maxi=max(arr[i],maxi);

// //    f(arr,n,i+1,maxi);
   
// // }
// // int f(string str,int n,int i,char key){
// // if(i >=n )return -1;

// // vector<int>v;
// // if(str[i]==key) cout<<i<<" ";

// // int ans= f(str,n,i+1,key);
// // return ans;



// // }
// //  void f(int n){
// //    if(n==0)return;

// //    int k=n%10;
// //    cout<<k<<" ";
// //    n/=10;
// //    f(n);

// // }
// // int f(int n){
// //    if(n==1 or n==0)return 1;
// //    int k=f(n-1)+f(n-2);
// //    return k;
// // }
// bool f(int arr[],int n){
//    if(n==0)return false;

//    if(arr[0]<arr[1])return true;
//    f(arr+1,n-1);

// }
// int main(){
//  int arr[]={1,2,3,4,9,6,7};
 

//    cout<<f(arr,7);

// }
#include <iostream>
using namespace std;

#define floop(a, n, incr) for (int a = 0; a < n; a incr)

int main() {
    int sum = 0;
    floop(i, 5, +=1) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}