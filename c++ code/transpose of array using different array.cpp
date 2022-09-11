#include<bits/stdc++.h>
using namespace std;
#define N 3
#define M 3
int main(){
	int a[N][M];
	int b[M][N],i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			cout<<"enter element for a"<<i+1<<j+1<<": ";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<" "<<b[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
