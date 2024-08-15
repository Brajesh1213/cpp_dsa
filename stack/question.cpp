#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,ans=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if(k>(n+1)/2)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			ans=0;
			for(int i=0;i<n;i++)
			{
				for (int j=0;j<n;j++)
				{
					if(i==j && i%2==0 && ans<k)
					{
						ans++;
						cout<<"R";
					}
					else
					cout<<".";
					
				}
				cout<<endl;
			}
		}
	}
	return 0;
}