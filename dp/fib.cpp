// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int f(int n){
// // //     int dp[n+1];
// // //    // for(int i=0;i<=n;i++)dp[i]=-1;
// // //     dp[0]=0,dp[1]=1;

// // //     for(int i=2;i<=n;i++){
// // //         dp[i]=dp[i-1]+dp[i+2];
// // //     }
// // //     int k=dp[n];
// // //     return k;
// // // }

 

// // // int main(){
// // // int n;cin>>n;
// // // vector<int>dp(n+1);
// // // dp[1]=1,dp[0]=0;

// // // for(int i=2;i<=n;i++){
// // //     dp[i]=dp[i-2]+dp[i-1];

// // // }
// // // cout<<dp[n];
// // // // int dp[n+1];
// // // // for(auto i=0;i<=n;i++)dp[i]=-1;


// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
    
// //     int pre1=1,pre2=0;
// //     if(n==0)return 0;
// //     for(int i=0;i<n;i++){
// // int curr=pre1+pre2;
// //     pre2=pre1;
// //     pre1=curr;  


// //     }
// //     cout<<pre1<<endl;
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int dp[40];

// int f(int n){
//     if(n==1 or n==2)return 1;
//     if(dp[n]!=-1)return dp[n];
    
//     dp[n]=f(n-1)+f(n-2);
//     return dp[n];
    
// }

// int main(){
// int n;
// cin>>n;
// for(int i=0;i<=n;i++){
//     dp[i]=-1;
// }


// cout<<f(n);

// } 

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    int k=(n+1)/2;
    int x=k-m;
    if(x&1)cout<<"no"<<endl;
    else if(x%2==0 and (2*m)<n){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}