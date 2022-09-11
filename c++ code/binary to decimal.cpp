#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,r,value=0,num,base=1;
	cin>>b;
	num=b;
	while(num>0)
	{
		r=num%10;
		num=num/10;
		value+=r*base;
		base*=2;
	}
	cout<<value;
	return 0;
}
