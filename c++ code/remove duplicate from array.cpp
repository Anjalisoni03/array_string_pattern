#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::vector<int> a;
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	a.push_back(2);
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<=n-2;k++)
				{
					a[k]=a[k+1];
				}
				n-=1;
				j=i;
			}
		}
	}
	a.resize(n);
	for(int b=0;b<n;b++)
	{
		cout<<a[b]<<" ";
	}
	return 0;
}
