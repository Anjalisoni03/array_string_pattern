#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,n1,n2,r,count=0,sum=0;
	cin>>n;
	n1=n;n2=n;
	while(n1>0){
		count++;
		n1/=10;
	}
	while(n2>0)
	{
		r=n2%10;
		int a=1;
		for(int i=0;i<count;i++)
		{
			a*=r;
		}
		sum+=a;
		n2/=10;	
	}
	if(sum==n)
	{
		cout<<n<<" is an armstrong number";
	}
	else
	{
		cout<<n<<" is not an armstrong number";
	}
}
