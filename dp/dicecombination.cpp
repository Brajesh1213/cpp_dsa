#include<bits/stdc++.h>
using namespace std;
int dp[4]={-1,-1,-1,-1};
int f(int n){
   
    if(n==0)return 1;
    if(n<0)return 0;
    
    if(dp[n]!=-1)return dp[n];

    dp[n]=0;
    for(int i=1;i<=6;i++){
        dp[n]+=f(n-i);
    }
    return dp[n];


    
}

int main(){
int n;cin>>n;
    
   int dp[n+1];
    for(int i=0;i<n;i++){
        dp[i]=-1;
    }
   
  
  cout<<f(4);
  
  

}