#include<stdio.h>
int main()
{
	int a=0;
	float b=0.0,c[8];
	for(a;a<8;a++)
		scanf("%f",&c[a]);
	for(a=0;a<8;a++)
		b+=c[a];
	printf("%f",b/8);
	return 0;
}
