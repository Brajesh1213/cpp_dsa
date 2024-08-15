#include<bits/stdc++.h>
using namespace std;

int f(vector<int>& arr,int k){

    if(k==0)return 0;

    if(k<0)return INT_MIN;

    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
         int ans= f(arr,k-arr[i]);
         if(ans!=INT_MIN)
         
         mini=min(mini,ans+1);
    } 
    
     
    return mini;

    

    


}

int main(){
    
vector<int>arr{1,2,3};
   cout<< f(arr,5);

    
}