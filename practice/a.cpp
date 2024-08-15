#include <bits/stdc++.h>
using namespace std;

void f(){
            int n,kth;
            cin>>n>>kth;
        vector<int> arr(n);
        for(int k = 0; k<n; k++)
        {
            arr[k] = k+1;
        }
         int cnt = 0;
        for (int k = 0; k + 1 < n && cnt < kth; k += 2) {
            swap(arr[k], arr[k + 1]);
            cnt++;
        }
        for(int k = 0; k<n; k++) cout<<arr[k]<<" ";
        cout<<endl;
}

int main() {
  // your code goes here
    int tt;
    cin>>tt;
    while(tt--)
    {
        f();
    }
}