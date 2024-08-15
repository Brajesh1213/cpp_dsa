#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;
   int sum=0;int i=0,j=0;
   int a[n];int mini=INT_MAX;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int s;cin>>s;
   
   while(j<n){
    sum+=a[j];
    if(sum>s){
        mini=min(mini,j-i+1);
        while(sum-a[i]>s){
            
            sum-=a[i];
            i++;
            mini=min(mini,j-i+1);
            }   
            
             }
    j++;
   }
    cout<<mini;



}