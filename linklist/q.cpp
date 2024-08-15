#include<bits/stdc++.h>
using namespace std;
int main(){
   float a,b,c;
   cin>>a>>b>>c;
   vector<float>v{a,b,c};
   sort(v.begin(),v.end());
   float k=ceil(v[2]/2);
   cout<<k;
   if(k-1<=(v[0]+v[1])){
    cout<<a+b+c;
   }
   else cout<<-1;
   
    

}