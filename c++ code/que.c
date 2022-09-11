#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;
	char output[50];
	x=10; y=x++ ; z=++y;
	if((x==y)&&(y==z)) 
		sprintf(output,"x:%d",x);
	else if((x==y)||(y==z)) 
		sprintf(output,"y:%d",y);	
	else 
		sprintf(output,"z:%d",z);
}

/*{
	int a=0,b=2,c=4,d=8;
	int x=a;
	if(d/c<=b||b/a==a) x=b;
	else x=c;
	return(x);
}
{
	char *p="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	for(i=0;i<5;i++) *p++; *p++;
	printf("%c",*p++);
	
}*/
