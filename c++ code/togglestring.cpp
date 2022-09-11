#include<iostream>
using namespace std;
int toggle(char x[10])
{
	for(int i=0;x[i]!='\0';i++)
	{
		if(int(x[i])>=65 && int(x[i])<=90)
		{
			x[i]= x[i] + 32;
			cout<<x[i];
		}
		else if(int(x[i])>=97 && int(x[i])<=122)
		{
			x[i]= x[i]-32;
			cout<<x[i];
		}
    }
}
int main()
{
	char a[10] ; cin>>a;  
	toggle(a);
	
}
