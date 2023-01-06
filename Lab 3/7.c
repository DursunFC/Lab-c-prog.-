#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if (a<=15)
		a*=32;
	else if (a>15&&a<=35)
		a=480;
	else
		a=480-(a*32);
	printf("%d",a);
}
