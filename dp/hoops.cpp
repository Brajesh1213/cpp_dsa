#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>arr){
    if(n<0)return 0;
    if(n==0)return 1;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=f(n-arr[i],arr); 
    }
    return sum;

}


int main(){
    int n;cin>>n;
    vector<int>arr;
    for(int i=1;i<=n;i++){arr.push_back(i);}
    
   // for(auto i:arr)cout<<i; 

    cout<<f(n,arr);
} 