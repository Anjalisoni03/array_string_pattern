#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={2,3,4,5,1,3,2,1,2};
	int n= sizeof(a)/sizeof(a[0]);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n=n-1;
				j=i;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
