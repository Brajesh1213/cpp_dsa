//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

bool isPrime(int n)
{
	
	if (n <= 1)
		return false;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}



    int goodSubsets(vector<int> &arr, int n){
        vector<int>v;
        for(int i=0;i<n;i++){
            if(isPrime(arr[i])==true){
                v.push_back(arr[i]);
            }
        }
        
          for(auto i:v)cout<<i<<" ";
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.goodSubsets(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends