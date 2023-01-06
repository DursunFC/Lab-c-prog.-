#include<stdio.h>
void main()
{
	int r,t,e;
	e=3.14;
	printf("Yaricap:");
	scanf("%d",&r);
	printf("Islem turu:");
	scanf("%d",&t);
	if (t==1||t==2)
		if(t==1)
			e*=2*r;
		else
			e*=r*r;
		
		printf("Sonuc: %d",e);
	else
		printf("Yanlis giris");
}
