#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5,j;
	for(int i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			cout<<"__";
		}
		for(j=0;j<i;j++)
		{
			cout<<"*_";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"*_";	
		}
		cout<<endl;	
	}
}
