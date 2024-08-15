#include<bits/stdc++.h>
using namespace std;
#define MOD 10e8+7
int f(int n,int i){
    if(i==n)return 1;

    if(i>n)return 0;

    return (f(n,i+1)+f(n,i+2));
    

}

int main(){ 
    int n;
    cin>>n;
   cout<< f(n,0);
}