#include<stdio.h>
void main()
{
	int v,f,n;
	float e;
	printf("Ogrenci no:	");
	scanf("%d",&n);
	printf("Vize:	");
	scanf("%d",&v);
	e=v*0.4;
	printf("Final:	"); 
	scanf("%d",&f);
	e+=f*0.6;
	printf("Ogrenci no: %d",n);
	printf("	Not:%f",e);
}
