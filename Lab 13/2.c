#include<stdio.h>
int func(int,int,int,int,int);

void main()
{
	int a1,a2,a3,a4,a5;
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	scanf("%d",&a4);
	scanf("%d",&a5);
	printf("%d",func(a1,a2,a3,a4,a5));
}

int func(int a0,int a1,int a2,int a3,int a4)
{	int e;
	e=a0+a1+a2+a3+a4,	e/=5;
	return e;
}
