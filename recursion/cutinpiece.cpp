#include<bits/stdc++.h>
using namespace std;

int f(int n,int x,int y,int z){

    if(n==0)return 0;
    if(n<0)return INT_MIN;
    
    int ans=0;
    
        ans=f(n-x,x,y,z)+1;

    
    int ans2=0;

        ans2=f(n-y,x,y,z)+1;

    
    int ans3=0;

        ans3=f(n-z,x,y,z)+1;
    
    ans=max(ans,max(ans2,ans3));

    

return ans;
}


int main(){
   int n=4,x=2,y=1,z=1;

   int ans=f(n,x,y,z);
    if(ans<0)ans=0;
    cout<<ans;


}