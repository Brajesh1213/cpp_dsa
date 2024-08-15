// // #include<bits/stdc++.h>
// // using namespace std;
// // int solve(int ans){
// //     int cnt=0;
// //     while(ans>0){
// //         ans/=2;
// //         cnt++;
// //     }
// //     return cnt;
// // }
// // int main(){
// //     int t;cin>>t;while(t--){

// //     string s;
// //     cin>>s;
// //     int n=s.length();
// //     int ans=n;z

// //     int maxi=INT_MIN;
// //     for(int i='a';i<='z';i++){

// //        char ch=i;
// //         //cout<<ch<<" ";
// //         int len=0;
// //         int res=0;


// //         for(int j=0;j<s.length();j++){
// //             if(s[j]==ch){
// //                res=max(res,len);
// //                 len=0;
// //             }

// //             else {len++;  }
// //         }
// //         res=max(res,len);
// //         ans=min(ans,res);

// //     }

// //     cout<<solve(ans)<<endl;

    

// // }
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;int a[n];
//    map<int ,int>m1,m2,m3;
//    for(int i=0;i<n;i++){
//     cin>>a[i];  
//      m1[a[i]]=i+1;

//    }
//    for(int i=0;i<n;i++){
//     m2[i+1]=i+1;

//    }
//    int cnt=0,ans=0;
//    for(int i=0;i<n;i++){
//     m3[abs(m1[i+1]-m2[i+1])]++;

//    }
//    int gcd;
//    for(auto i:m3){
//     gcd=i.first;
//     break;
//    }
//    for(auto i:m3){
//     gcd=__gcd(gcd,i.first);
//     cout<<gcd<<endl;
//    }

// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;cin>>t;while(t--){
//     int n;cin>>n;
//     int a[n];
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
    
//         v.push_back(abs(a[i]-(i+1)));

//     }
//     // for(auto i:v)cout<<i<<" ";
//     // cout<<endl;
//     int gcd=0;
//     for(auto i:v){
//         gcd=__gcd(gcd,i);
//     }
//     cout<<gcd<<endl;
// }
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll mod=10e9+7;
    int tt;cin>>tt;while(tt--){
    ll n;cin>>n;
     ll ans=1;
    ll a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    ll j=0;
    vector<ll>res(n);
    for(int i=0;i<n;i++){
        while(a[j]<=b[i] and j!=n){

            j++;
            
            }

        if(j!=n)res[i]=n-j;
    }
    sort(res.begin(),res.end());
   
    for(int i=0;i<n;i++){
        ans=((ans%mod)*((res[i]-i)%mod))%mod;
    }
cout<<ans<<endl;


}
}