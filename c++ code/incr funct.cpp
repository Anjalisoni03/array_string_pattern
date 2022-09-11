#include<iostream>
using namespace std;
int main()
{
	int x=20;
	int y=35;
	x= x++ + y++;
	y= ++y + ++x;
	cout<<x<<" "<<y;
}
