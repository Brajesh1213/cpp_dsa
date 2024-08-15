#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;cin>>tt;while(tt--){
int a,b;
cin>>a>>b;
if(a==1 and b==1){
    cout<<"YES"<<endl;
cout<<1<<" "<<2<<" "<<3<<endl;

}
else if(b==1){
    cout<<"YES"<<endl;
    cout<<a<<" "<<a*(b+1)<<" "<<a*(b+2)<<endl;
}
else{
    cout<<"YES"<<endl;
    cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;


}


    }
}