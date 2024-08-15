#include<bits/stdc++.h>
using namespace std;

// vector<int> f(vector<int>& nums) {
//     vector<int> v(nums.size());
//     stack<int> st;

//     for(int i = 0; i < nums.size(); i++) {
//         // Pop elements from the stack until the top element is less than or equal to nums[i]
//         while (!st.empty() && st.top() >= nums[i]) {
//             st.pop();
//         }

//         // If the stack is empty, there is no smaller element to the left, so push -1
//         // Otherwise, push the top element of the stack
//         v[i] = st.empty() ? -1 : st.top();

//         // Push nums[i] onto the stack
//         st.push(nums[i]);
//     }

//     return v;   
// }




// vector<int> g(vector<int>& nums) {
//     vector<int> v(nums.size());
//     stack<int> st;
//     int n=nums.size();
//     for(int i = n-1; i >=0; i--) {
//         // Pop elements from the stack until the top element is less than or equal to nums[i]
//         while (!st.empty() && st.top() >= nums[i]) {
//             st.pop();
//         }

//         // If the stack is empty, there is no smaller element to the left, so push -1
//         // Otherwise, push the top element of the stack
//         v[i] = st.empty() ? -1 : st.top();

//         // Push nums[i] onto the stack
//         st.push(nums[i]);
//     }

//     return v;   
// }


int main() {
    cout<<abs('a'-'d');
}
