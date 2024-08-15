// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int tt;cin>>tt;while(tt--){
// //     int n;
// //     int a;
// //     int b;
// //     cin>>n>>a>>b;
// //     string s;
// //     cin>>s;
// //     // for(int i=0;i<n;i++){cin>>arr[i];}
// //     int ans=a*n;
// //     if(b>=0)ans+=n*b;
// //     else{
// //             int total=0;
// //             for(int i=1;i<n;i++){
// //                     if(s[i]!=s[i-1])total++;

// //             }
// //             total++;
// //             ans+=((total/2)+1)*b;

// //     }
// //     cout<<ans<<endl;
    
// //     }

// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//         int t;cin>>t;while(t--){
//         int n;
//         cin>>n;
//         if(n<=4){
//                cout<<"Bob"<<endl;
//         }
//         else{
//                 cout<<"Alice"<<endl;
//         }
// }
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
        int t;cin>>t;while(t--){
        ll n;
        cin>>n;
        ll fr,last,tc,x,tru=0;
        string sol="";
        for(int j=0;j<n;j++){
                cin>>x;
                if(j==0){
                        last=x;
                        fr=x;
                        sol+="1";
                }
                else if(!tru and x>=fr and last<=x){
                        last=x;
                        sol+="1";
                }
                else if(!tru and x<=fr and last>x){
                        tru=1;
                        last=x;
                        sol+="1";
                }
                else if(tru and x>=last and x<=fr){
                        last=x;
                        sol+="1";

                }
                else sol+='0';
               
                


                }
                cout<<sol<<endl;
        }
       
}
