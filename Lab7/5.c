#include<stdio.h>
void main()
{
	int a,b,c,d,m;
	printf("Miktari girin:	");
	scanf("%d",&m);
	a=m/100, m%=100;
	b=m/50, m%=50;
	c=m/20, m%=20;
	d=m/10;
	printf("100'luk:%d",a);
	printf("	50'lik:%d",b);
	printf("	20'lik:%d",c);
	printf("	10'luk:%d",d);
}
