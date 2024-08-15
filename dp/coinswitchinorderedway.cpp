#include<bits/stdc++.h>
using namespace std;
int f(vector<int>arr,int k,int sum){
    if(sum>k)return 0;
    if(sum==k)return 1;
    if(sum<k)return 0;
    for(int i=0;i<n;i++)sum+=f(arr,k,sum+arr[i])+f(arr,k,sum);
     


}


int main(){
    vector<int>arr{2,3};
    int sum=0;
   cout<< f(arr,5,sum);
      
}