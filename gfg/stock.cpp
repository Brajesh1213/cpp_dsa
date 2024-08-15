// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int a[n];
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++)cin>>a[i];
//     int b[n]={0};
//     int k=0;
//     int m=INT_MIN;
//     for(int i=n-1;i>=0;i--){
//         maxi=max(a[i],maxi);
//         b[i]=maxi;
//     }
//    for(int i=0;i<n;i++){
//     k=b[i]-a[i];
//     m=max(m,k);
//    }
//    cout<<m;

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    int N=S.length();
    int X;cin>>X;
      int zero = 0;
        
        for(int i=0;i<N;i++)
        {
            if(S[i]=='1'){
                if(zero-X > 0){
                    return 0;
                }
                else{
                    zero = 0;
                    zero -= X;
                }
            }
            else{
                zero++;
            }
        }
        if(zero > 0) return 0;
        
        return 1;
    
    }
   
  
