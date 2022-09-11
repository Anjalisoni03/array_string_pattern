#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,sum=0,fact=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		cout<<fact<<endl;
		sum+= (i/fact);
	}
	cout<<sum;
	return 0;
}
