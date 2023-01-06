#include<stdio.h>
#include<math.h>
int main(void)
{
	int c=0,b=0,n,a[10];
	scanf("%d",&n);
	for(;n!=0;c++)
		a[c]=n%10,	n/=10;
	for(c--;c>=0;c--,b++)
		n+=a[c]*pow(10,b);
	printf("%d",n);
	return 0;
}
