#include<stdio.h>
int main()
{
	int a=0,b=0,c[10];
	for(;a<10;a++)
	{	scanf("%d",&b);
		if(b==-1)	break;
		c[a]=b;
	}
	for(a=0;a<10;a++)
		printf("%d \n",c[a]*c[a]);
}
