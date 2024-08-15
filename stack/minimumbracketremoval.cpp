#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
      int a=0,b=0;
     cin>>s;
     stack<char>st;
     int n=s.size();
     if(n&1){
        cout<<-1;
     }
     else{
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='{'){
                st.push(ch);
            }
            else{
                if(!st.empty() and st.top()=='{'){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }


     }

     while(!st.empty()){
        if(st.top()=='{')a++;
        else b++;
        st.pop();
     }
     cout<<((a+1)/2)+((b+1)/2);

     

     
     
     
}