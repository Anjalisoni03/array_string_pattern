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
		for(j=0;j<i;j++)
		{
			if(j==0 || i==n-1)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		for(j=0;j<=i;j++)
		{
			if(i==n-1||j==i)
			{
				cout<<"* ";	
			}
			else
			{
				cout<<"  ";
			}			
		}
		cout<<endl;	
	}
}
