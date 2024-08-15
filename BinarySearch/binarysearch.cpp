#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> v;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[i + m] = nums2[i];
        }
        f(nums1, 0, n + m );

        for (auto i : v) cout << i << " ";
    }

private:
    void g(vector<int>& nums, int low, int mid, int high) {
        int start = low;
        int end = mid + 1;
        while (low <= mid && end <= high) {
            if (nums[start] >= nums[end]) {
                v.push_back(nums[end]);
                end++;
            } else {
                v.push_back(nums[start]);
                start++;
            }
        }
        while (start <= mid) {
            v.push_back(nums[start]);
            start++;
        }
        while (end <= high) {
            v.push_back(nums[end]);
            end++;
        }
    }

    void f(vector<int>& nums, int low, int high) {
        if (low >= high) return;
        int mid = low + (high - low) / 2;
        f(nums, low, mid);
        f(nums, mid + 1, high);
        g(nums, low, mid, high);
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 3, 4};
    Solution solution;


    int n;
    cin>>n;
vector<bool> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
for(auto i=0;i<is_prime.size();i++){
    // cout<<is_prime[i]<<" ";
    if(is_prime[i]==1)cout<<i<<" ";
}










    // solution.merge(nums1, 3, nums2, 3);
    return 0;
}
