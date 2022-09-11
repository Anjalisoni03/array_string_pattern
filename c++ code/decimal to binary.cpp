#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=89,r=0,i=0;
	int arr[32];
	while(n>0)
	{
		arr[i]=n%2;
		i++;
		n=n/2;		
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<arr[j];
	}
	return 0;
}
