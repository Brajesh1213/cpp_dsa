#include<bits/stdc++.h>
using namespace std;


int f(int grid[][],int i,int j){
    if(i>=n or j>=m)return INT_MAX;

    if(i=n-1 and j==m-1)return a[n-1][m-1];
    return a[i][j]+min(f(i,j+1),f(i+1,j));
    


}
int main(){
    int n;cin>>n;
    int m;cin>>m;
    int grid[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
   cout<<f(grid,n,m);


    
    

}
