// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int a[n];
//   for(int i=0;i<n;i++){
//     cin>>a[i];
//   }
//   stack<long long>s;
//         vector<long long>v(n);
        
//         for(int i=n-1;i>=0;i--){
            
//             while(!s.empty() and a[i]>=s.top()){
//                 s.pop();
//             }
//             if(s.empty())v[i]=-1;
//             else v[i]=s.top();
//             s.push(a[i]);
            
//         }
//         for(auto i: v)cout<<i<<" ";
        

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int nums[n];
  for(int i=0;i<n;i++)cin>>nums[i];
   
        int  maxi=INT_MIN;
        int mini=INT_MAX;
        int ind=0,ind2=0;
        for(int i=0;i<n;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                ind=i;

            }
        }
        for(int i=0;i<n;i++){
            if(mini>nums[i]){
                mini=nums[i];
                ind2=i;
            }
        }
        if(ind>ind2)cout<<"true";
        else cout<<"false";

}