#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x,ds,a;
	x=rand()%100;
	for(ds=1;ds<11;ds++)
	{	printf("\nKalan deneme hakki: %d/10\nSayi girin: ",11-ds);
		scanf("%d",&a);
		if(a==x)
		{	printf("Tebrikler sayiyi %d denemede buldunuz.",ds);
			break;
		}
		else
			printf("%d denemede sayiyi bulmadiniz, tekrar deneyin.",ds);
	}
	if(ds==11)	printf("\n\nUzgunum, 10 denemede sayiyi bulamdiniz.");
	return 0;
}
