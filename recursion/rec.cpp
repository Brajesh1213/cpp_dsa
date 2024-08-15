// // #include<bits/stdc++.h>
// // using namespace std;
// // // int
int cnt=0;
// // bool print(string & str,int n,int i){
// //     if(i>=n)return true;
// //     if(str[i]!=str[n-i])return false;

// //    return print(str,n,i+1);
    

// // }
// // int main(){

// //     string str="brajesh";
// //     int n=str.size();
// //     cout<<print(str,n-1,0);


// // }

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
// int cnt=0;


void subsequence(vector<int>&v,int i,vector<int>&tmp){
    if(i>=v.size()){
        for(auto i:tmp){            
        if(tmp.size()==0)cout<<"{}";

        cout<<i<<" ";

        }

        cout<<endl;
        return;
    }
        subsequence(v,i+1,tmp);

    tmp.push_back(v[i]);
    subsequence(v,i+1,tmp);
    tmp.pop_back();
}


void merge(vector<int>&nums,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int>temp;

    while(left<=mid and right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }

    for(int i=low;i<high;i++){
            nums[i]=temp[i-low];
    }
}
 void merge_sort(vector<int>&nums,int low,int high){
    if(low>=high)return;
    int mid= (high+low)/2;
    merge_sort(nums,low,mid);
    merge_sort(nums,mid+1,high);
    merge(nums,low,mid,high);

 }


int f(vector<int>& nums, int low, int high) {
    int pivot = nums[low];

    int i = low, j = high;

    while (i < j) {
        while (nums[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (nums[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[low], nums[j]);
    return j;
}

void quick(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pivot = f(nums, low, high);
        quick(nums, low, pivot);
        quick(nums, pivot + 1, high);
    }
}



void subsequencesum(vector<int>&nums,int sum,int k,int i)
{
    if(i==nums.size()){
        if(sum==k)cnt++;
        return;
    }
    subsequencesum(nums,sum+nums[i],k,i+1);
    subsequencesum(nums,sum,k,i+1);

}

void combination_sum_rep_allow(vector<int>nums,int sum,int i,vector<int>temp,vector<vector<int>>&ans){
    if(i==nums.size()){
        if(sum==0)
        ans.push_back(temp);

        return;
    }
    if(sum>=nums[i]){
        temp.push_back(nums[i]);
        combination_sum_rep_allow(nums,sum-nums[i],i,temp,ans);
        temp.pop_back();
    }
            combination_sum_rep_allow(nums,sum,i+1,temp,ans);


}
void subsetsum(vector<int>&nums,int i,vector<int>&temp,int sum){
    if(i==nums.size()){
        temp.push_back(sum);

        return;
    }
    subsetsum(nums,i+1,temp,sum+nums[i]);
    subsetsum(nums,i+1,temp,sum);

}


void permutation(vector<int>nums,int vis[],vector<int>temp,vector<vector<int>>&ans){
    if(temp.size()==nums.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!vis[i]){
            temp.push_back(nums[i]);
            vis[i]=1;
            permutation(nums,vis,temp,ans);
            vis[i]=0;
            temp.pop_back();
        }

    }
}



bool issafe(vector<string>&temp,int row,int col,int n){
    int dubrow=row;
    int dubcol=col;
    while(col>=0){
        if(temp[row][col]=='Q')return false;
        col--;
    }
    row =dubrow;
    col= dubcol;
    while(row>=0 && col>=0){
        if(temp[row][col]=='Q')return false;
        row--;
        col--;
    }
    row=dubrow;
    col=dubcol;
    while(row<n and col>=0){
        if(temp[row][col]=='Q')return false;
        
        row++;
        col--;
    }

    return true;

}


void nqueensolution(int col,vector<vector<string>>&ans,vector<string>temp,int n){
    if(col==n){
        ans.push_back(temp);
        return;

    }
    for(int row=0;row<n;row++){
        if(issafe(temp,row,col,n)){
            temp[row][col]='Q';
            nqueensolution(col+1,ans,temp,n);
            temp[row][col]='.';

        }
    }
}





void Nqueenhashmethod(int col, int n, vector<string>& temp, vector<vector<string>>& ans, vector<int>& left, vector<int>& uperright, vector<int>& lowerleft) {
        if (col == n) {
            ans.push_back(temp);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (!left[row] && !uperright[n - 1 + col - row] && !lowerleft[row + col]) {
                temp[row][col] = 'Q';
                left[row] = 1;
                uperright[n - 1 + col - row] = 1;
                lowerleft[row + col] = 1;
                Nqueenhashmethod(col + 1, n, temp, ans, left, uperright, lowerleft);
                temp[row][col] = '.';
                left[row] = 0;
                uperright[n - 1 + col - row] = 0;
                lowerleft[row + col] = 0;
            }
        }
    }

    
vector<vector<string>> nQueen(int &n) {
    string str(n, '.');
        vector<string> temp(n, str);
        vector<vector<string>> ans;
        vector<int> left(n, 0), uperright(2 * n - 1, 0), lowerleft(2 * n - 1, 0);
        Nqueenhashmethod(0, n, temp, ans, left, uperright, lowerleft);
        return ans;
}
//     vector<vector<string>> ans;
//     string s(n, '.'); // Create a string with n dots ('.')
//     vector<string> temp(n, s); // Create a vector of n strings, each initialized with the string s

//     nqueensolution(0,ans,temp,n);

//     return ans; // Return the result vector
// }
bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void palindromePartitions(string &s, int i, vector<string>& temp, vector<vector<string>>& ans) {
    if (i == s.size()) {
        // ans.push_back(temp);
        cout<<"[";
        for(auto i:temp)cout<<i<<" ";
        cout<<']';
        return;
    }
    for (int idx = i; idx < s.size(); idx++) {
        cout<<idx<<" idx ka value "<<endl;
                cout<<i<<" i ka value"<<endl;
        if (isPalindrome(s, i, idx)) {
                
            temp.push_back(s.substr(i, idx - i + 1));
            palindromePartitions(s, idx + 1, temp, ans);
            temp.pop_back();
        }
                    cout<<i<<" "<<idx<<" i niche wala ka value"<<endl;

    }
}

void Kthpermutation(int n,int k){
    vector<int>v;
    int fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
        v.push_back(i);
    }
    k=k-1;
    string ans="";
    v.push_back(n);
    while(true){
        ans+=to_string(v[k/fact]);
        v.erase(v.begin()+k/fact);
        if(v.size()==0)break;
        k=k%fact;
        fact=fact/v.size();

        
    }

    cout<<ans;



}

// flag=false;
// bool check(vector<int>nums){
    
// }
// void checkTringle(vector<int>nums,int i,vector<int>temp){
//     if(i==3){
        
//         if()
//     }
// }

int countinversion=0;
void mergecheck(vector<int>nums,int low,int mid,int high){
    int i=low;
    int cnt=0;
    vector<int>temp;
    int j=mid+1;
    while(i<=mid and j<=high ){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            j++;
        }
        else{
            temp.push_back(nums[j]);
            cnt+=mid-i+1;
            i++;
            
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(nums[j]);

        j++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
    countinversion+=cnt;
}
void countInversion(vector<int>nums,int low,int high){
    if(low>=high)return;
    int mid=(high+low)/2;
    countInversion(nums,low,mid);
    countInversion(nums,mid+1,high);
    mergecheck(nums,low,mid,high);
    

}

bool compareBybit(int p1, int p2) 
{ 
    return __builtin_popcount(p1) < __builtin_popcount(p2); 
}


int main(){
    
    vector<int>v={1,2,4,3,5,9,8,1};
    sort(v.begin(),v.end(),compareBybit);
    for(auto i:v)cout<<i<<" ";
    // int n=4;
    // Kthpermutation(3,6);
    // vector<int>nums={5,1,2,1,1};
    // countInversion(nums,0,5);
    // cout<<countinversion<<" "; 
    // string s="aab";
    // // vector<int>temp;
    // vector<vector<string>>ans;
    // vector<string>temp;
    // palindromePartitions(s,0,temp,ans);
    // // for(auto i:ans){
    // //     cout<<"[";
    // //     for(auto j:i){
    // //         cout<<j<<",";
    // //     }
    // //     cout<<"]";
    // // }

    // vector<vector<string>>nQueenres=nQueen(n);


    // for(auto i:nQueenres){
    //     cout<<'[';
    //     for(auto j:i){
    //         for(auto k:j){
    //             cout<<k;
    //         }
    //         cout<<endl;
    //     }
    //     cout<<']';
    //     cout<<endl;

    

    // subsetsum(v,0,temp,0);
    // sort(temp.begin(),temp.end());
    // for(auto i:temp)cout<<i<<" ";


    // vector<vector<int>>ans;
    // int vis[v.size()];
    // for(int i=0;i<v.size();i++)vis[i]=0;
    // permutation(v,vis,temp,ans);
    // combination_sum_rep_allow(v,3,0,temp,ans);

   
//     // for(auto i:ans){
//     //     cout<<"["<<" ";
//     //     for(auto j:i)cout<<j<<" ";

//     //     cout<<" ]"<<endl;
//     // }
// //     // subsequence (v,0,tmp);
    // merge_sort(v,0,5);
// //    cout << "Sorted array: ";
// //     for (int num : v) {
// //         cout << num << " ";
// //     }
// //     cout << endl;
//     return 0;

}

// int main() {
//     vector<vector<string>> nQueenResult = nQueen(4);
//     for (auto i : nQueenResult) {
//         cout << '[' << endl;
//         for (auto j : i) {
//             for (auto k : j) {
//                 cout << k;
//             }
//             cout << endl;
//         }
//         cout << ']' << endl;
//     }
//     return 0;
// }

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();