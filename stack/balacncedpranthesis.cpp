#include<bits/stdc++.h>
using namespace std;
bool solve(){
    string x;
    cin>>x;
    int n=x.size();
    stack<char>st;
    bool ans=true;

    for(int i=0;i<n;i++){
        if(x[i]=='(' or x[i]=='[' or x[i]=='{'){
            st.push(x[i]);
        }
        else{
            if(!st.empty()){
            if(( x[i]==')' and st.top()=='(') or (x[i]=='}' and st.top()=='{') or (x[i]==']' and st.top()=='[') )
            {
                st.pop();
            }
            else return false;
        }
        else{
            return false;
        }
        }
       
    }
    if(st.empty())return true;
    return false;
   
   
}
int main(){
    cout<<solve();
}
   
