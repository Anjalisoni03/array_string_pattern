#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=10,j;
	for(int i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			cout<<"  ";
		}
		for(j=0;j<2*i+1;j++)
		{
			cout<<"* ";	
		}
		cout<<endl;	
	}
}
