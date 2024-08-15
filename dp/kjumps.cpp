// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // vector<vector<int>> f(vector<vector<int>>& arr) {
// // //     int n = arr.size();
// // //     vector<vector<int>> ans;
// // //     int k = 0;
// // //     ans.push_back({arr[0][0], arr[0][1]}); // Corrected initialization of ans
// // //     for (int i = 1; i < n; i++) { // Start from index 1, as we have already processed index 0
// // //         int p = arr[i][0];
// // //         int q = arr[i][1];
// // //         if (ans[k][1] >= p) {
// // //             ans[k][1] = max(ans[k][1], q); // Update ans[k][1] with the maximum of current q and ans[k][1]
// // //         } else {
// // //             ans.push_back({p, q}); // Add a new interval to ans
// // //             k++;
// // //         }
// // //     }
// // //     return ans;
// // // }

// // // int main() {
// // //     int n;
// // //     cin >> n;
// // //     vector<vector<int>> arr(n, vector<int>(2));
// // //     for (int i = 0; i < n; i++) {
// // //         for (int j = 0; j < 2; j++) {
// // //             cin >> arr[i][j];
// // //         }
// // //     }

// // //     vector<vector<int>> ans = f(arr);
// // //     for (auto& i : ans) {
// // //         cout << '[';
// // //         for (auto& j : i) {
// // //             cout << j << " ";
// // //         }
// // //         cout << "]" << endl;
// // //     }

// // //     return 0;
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// //  string f(string order, string s) {
// //         std::unordered_map<char, int> charCount;
// //         for (char c : order) {
// //             charCount[c] = 0;
// //         }
        
// //         for (char c : s) {
// //             if (charCount.find(c) != charCount.end()) {
// //                 charCount[c]++;
// //             }
// //         }
        
// //         std::string sortedS;
// //         for (char c : order) {
            
// //             sortedS.append(charCount[c], c);
// //         }
        
// //         for (char c : s) {
// //             if (charCount.find(c) == charCount.end()) {
// //                 sortedS.push_back(c);
// //             }
// //         }
        
// //         return sortedS;
// //     }

// // int main(){
// //     string s,order;
// //     cin>>order>>s;
// //     string ans = f(order,s);
// //     cout<<ans;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n];
//     for(int i=0;i<m;i++)cin>>a[i];

    
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// int main() {

//   int n;
//   cin>>n;
//   map<int,int> mp;
//   for(int i=0;i<n;i++){
//     int a,b;
//     cin>>a>>b;
//     mp[b]=a;
//   }
//   for(auto i:mp)cout<<i.first<<"->"<<i.second<<endl;
//   int mi=100001,ma=0,a=0,b=0;
//   for(auto x:mp){
//     if(x.second>ma){
//       b=x.first;
//       ma = x.second;
//     }
//     else if(x.second==ma){
//       b=max(b,x.first);
//     }
//     if(x.second<mi){
//       a = x.first;
//       mi = x.second;
//     }
//     else if(x.second==mi){
//       a = min(a,x.first);
//     }
//   }
//   cout<<abs(b-a);
//   return 0;
// }
// C++ code to print all possible subarrays for given array
// using recursion

// Recursive function to print all possible subarrays for
// given array
void printSubArrays(vector<int> arr, int start, int end)
{
	// Stop if we have reached the end of the array
	if (end == arr.size())
		return;
	// Increment the end point and start from 0
	else if (start > end)
		printSubArrays(arr, 0, end + 1);
	// Print the subarray and increment the starting point
	else {
		cout << "[";
		for (int i = start; i < end; i++)
			cout << arr[i] << ", ";
		cout << arr[end] << "]" << endl;
		printSubArrays(arr, start + 1, end);
	}
	return;
}

int main()
{
	vector<int> arr = { 1, 2, 3 };
	printSubArrays(arr, 0, 0);
	return 0;
}

