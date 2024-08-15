// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin>>t;
//     int k=1e6;
//     vector<int>v(k+1);
//     for(int i=2;i<=k;i++)
//     v[i]=i;
//     for(int i=2;i*i<=k;i++)
//     {
//         if(v[i]==i)
//         {
//             for(int j=i*i;j<k;j+=i)
//             {
//                 if(v[j]==j)
//                 v[j]=i;
//             }
//         }
//     }
//     vector<int>arr;
//     for(int i=2;i<=k;i++)
//     {
//         if(v[i]==i)
//         arr.push_back(i);
//     }
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         // cout<<v[n]<<endl;
//         if(v[n]==n)
//         {
//             int ans=0;
//             for(int i=0;i<arr.size();i++)
//             {
//                 if(arr[i]==n)
//                 {
//                     ans+=n;
//                     break;
//                 }
//                 ans+=arr[i];
//             }
//             cout<<ans*n<<endl;
//             continue;
//         }
//         // cout<<v[n]<<endl;
//         int x=v[n];
//         int ans=0;
//         for(int i=0;i<arr.size();i++)
//         {
//             if(arr[i]==x)
//             {
//                 ans+=x;
//                 break;
//             }
//             ans+=arr[i];
//         }
//         cout<<ans*n<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        ll n, m;
        cin >> n >> m;
        vector<int> nums(m);
        string s;
        cin >> s;
        for (int i = 0; i < m; i++) {
            cin >> nums[i];
            nums[i]--; // Convert to 0-based index
        }
        string c;
        cin >> c;
        queue<char> q;
        for(auto i:c)q.push(i);
        for (int i = 0; i < m; i++) {
            sort(s.begin(),s.end());
            s[nums[i]] = q.front();
            
            q.pop();
        }

    
        cout << s << endl; // Ensure each output is on a new line
    }

    return 0;
}
