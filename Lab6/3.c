#include<stdio.h>
int main(void)
{
	int e=0,c,n;
	scanf("%d",&n);
	for(c=0;c<3;c++)
		e+=n%10,	n/=10;
	printf("%d",e/3);
	return 0;
}
