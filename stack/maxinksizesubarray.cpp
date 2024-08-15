#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 int a[n],sum=0;
 for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
 }
 int sum1=sum,sum2=0;
 sort(a,a+n,greater<int>());
 int i=0,k=0;
 while(i!=n){
    sum1-=a[i];
    sum2+=a[i];


    if(sum2>=sum1){
        break;
    }
    k++;
    i++;

 }
 cout<<k;
  




}



