#include<bits/stdc++.h>
using namespace std;

void f(vector<int>arr,int i,int sum,int maxi){
    if(i>=arr.size()){
    maxi=max(sum,maxi);
    cout<<maxi; 
    return;}

    f(arr,i+2,sum+arr[i],maxi);
    f(arr,i+1,sum,maxi);


}

int main(){
    vector<int>arr{2,1,4,9};
    int sum=0;
    int maxi=INT_MIN;
    f(arr,0,sum,maxi);
}