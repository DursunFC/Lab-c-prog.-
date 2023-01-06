#include<stdio.h>
int main(void)
{
	int a=0,e=0,c,n;
	for(c=0;c<10;c++)
	{	scanf("%d",&n);
		if(n>0)			a++;
		else if(n==0)	printf("Lutfen 0'dan farkli bir sayi girin. ");
		else			e++;
	}
	printf("Negatif:%d\nPozitif:%d",e,a);
	return 0;
}
