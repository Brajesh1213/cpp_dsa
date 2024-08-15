#include<bits/stdc++.h>
using namespace std;
int f(int a[],int n){
  
stack<int>st;
int count=0;
for(int i=0;i<n;i++){
    
    if(st.empty()){
        st.push(a[i]);
        
    }
    else if(st.top()<a[i]){
        count++;
        st.pop();
    }
    else{
        st.push(a[i]);
    }


}
if(count>0){
    return true;
}
else return false;



}
int main(){
   int n;cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
  // int n=5;
   cout<<f(a,n);
}

