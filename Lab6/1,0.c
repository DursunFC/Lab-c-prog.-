#include<stdio.h>
int main(void)
{
	int c,n;
	scanf("%d",&n);
	for(c=2;c<n;c++)
	{	if(n%c==0)	break;
	}
	if(c==n||n==2)	printf("%d",n);
	return 0;
}
