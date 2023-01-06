#include<stdio.h>
int main(void)
{
	int n,b=0,c=0,k=0;
	for(;c<10;c++)
	{	scanf("%d",&n);
		if(n>b)	b=n;
		if(n<k)	k=n;
	}
	printf("En buyuk sayi: %d\nEn kucuk sayi: %d",b,k);
	return 0;
}
