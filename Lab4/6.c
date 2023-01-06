#include<stdio.h>
int main(void)
{
	int a,b,e=10000;
	printf("Bu isletmede asgari ucret 10000 tl olarak odenmektedir.\n");
	printf("Parca sayisini girin: ");
	scanf("%d",&a);
	if(a<10&&a>0)			e+=a*5000;
	else if(a>=10&&a<30)	e+=a*8000;
	else					e+=a*12000;
	printf("Iscinin maasi: %d",e);
	return 0;
}
