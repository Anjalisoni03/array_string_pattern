#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,total=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=1;j<=i;j++)
		{
			sum+=j;
		}
		cout<<sum<<endl;
		total+= sum;	
	}	
	cout<<total;
}
