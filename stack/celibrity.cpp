#include<bits/stdc++.h>
using namespace std;
int f(int lo,int hi,string &s,int k){


unordered_map<char,int>mp;
for(int i=lo;i<=hi;i++)
{
    mp[s[i]]++;
  }
  int bp=-1;
  for(int i=lo;i<=hi;i++){
    if(mp[s[i]]<k){
        bp=i;
        break;
    }

  }
  if(bp==-1){
    return (hi-lo+1);

  }
  int left=f(lo,bp-1,s,k);
  int right=f(bp+1,hi,s,k);
  return max(left,right);


}
int main(){
   string s;
   cin>>s;
   int k;cin>>k;

   cout<<f(0,s.size(),s,k);




}

// int helper(int lo, int hi, string &s, int k){
//         if(lo > hi)return 0;//empty substring
        
//         unordered_map<int, int> m;
//         for(int i = lo;i <= hi;i++){//storing frequencies of every character in current substring
//             m[s[i]]++;
//         }
//         int breakPoint = -1;
//         for(int i = lo;i <= hi;i++){//Checking if any characters frequncy is less than k or not
//             if(m[s[i]] < k){
//                 breakPoint = i;
//                 break;
//             }
//         }
//         if(breakPoint == -1)return (hi - lo + 1);//when every char in substring are greater or equal to k times
// 		//else divide and conquer
// 		int left = helper(lo, breakPoint - 1, s, k);
// 		int right = helper(breakPoint + 1, hi, s, k)
		
//         return max(left, right);
//     }