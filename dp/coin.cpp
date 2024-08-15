#include<bits/stdc++.h>
using namespace std;
const unsigned int MOD=10e7;
int f(vector<int>&arr,int target,vector<int> &dp){
    if(target==0)return 1;
    if(target<0)return 0;
    if(dp[target]!=-1)return dp[target];

    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=f(arr,target-arr[i],dp);
        dp[target]=sum;
    }
    return dp[target];


}

int main(){
    vector<int>arr{1,2,3};
    int target=8;
    vector<int>dp(40,-1);

    
  //  for(auto i:dp)cout<<i;
   cout<< f(arr,target,dp);
}