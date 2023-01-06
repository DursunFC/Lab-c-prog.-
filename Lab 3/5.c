#include<stdio.h>
void main()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	if (a==b&&c==d&&a==d)
		printf("Karedir");
	else
		printf("Kare degildir");
}
