#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,rows;
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
