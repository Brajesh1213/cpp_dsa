#include<bits/stdc++.h>
using namespace std;

int f(vector<vector<int>>&books,int)
int main(){
    int n;
    cin>>n;
    vector<vector<int>> books(n);
    int shelfWidth;
    cin>>shelfWidth;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>books[i][j];
        }
    }
    cout<<f(books,shelfWidth);

    
    }