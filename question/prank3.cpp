// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
//  string s;
//  cin>>s;
//  int last,first,cnt=0,maxi=INT_MIN;
//  unordered_map<char,int>mp;
//  for(int i=0;i<s.length();i++){

//   if(mp.find(s[i])!=mp.end()){
  
//     first=last;
//       mp.clear();
//        maxi=max(maxi,cnt);
//     cnt=0;
//    // mp[s[i]]++;

//   }
//   else{
//     cnt++;
//     last++;
   

//   }
//   mp[s[i]]++;
 

//  }
//   cout<<maxi;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int start[n],end[n];
  for(int i=0;i<n;i++){
    cin>>start[i];
  }
  for(int i=0;i<n;i++){
    cin>>end[i];
  }
  vector<pair<int,int>>p;
  for(int i=0;i<n;i++){
    p.push_back({end[i],start[i]});
  }
  sort(p.begin(),p.end());
 // for(auto i:p)cout<<i.first<<"->"<<i.second<<endl;

   int sum=1;
   int lastv=p[0].first;

    for(int i=1;i<n;i++){
      if(lastv<p[i].second){
        lastv=p[i].first;
        sum++;
      }
     
     
    }
cout<<sum;



}