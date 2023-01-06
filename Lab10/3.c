#include<stdio.h>
int main()
{
	int a,b,c[5];
	scanf("%d",&a);
	for(b=0;b<5;b++)
	{	if(b!=3)
		{	c[b]=a/10;
			a/=10;
		}
		else
			c[b]=a/10;
			a/=10;
	}
	for(b=0;b<5;b++)
		printf("%d",c[b]);
	return 0;
}
