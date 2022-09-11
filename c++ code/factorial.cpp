#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f;
	cin>>f;
	int i,total=1;
	if(f==0)
	{
		return 0;
	}
	else
	{
		for(i=f;i>0;i--)
		{
			total*=i;
		}
	}
	cout<<total;
	
}
