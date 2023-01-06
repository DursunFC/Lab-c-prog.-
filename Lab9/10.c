/*Draw a flowchart to find the largest of three numbers A, B, and C.*/

#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a<b)	
		if(b<c)
			printf("En buyuk sayi %d",c);
		else
			printf("En buyuk sayi %d",b);
	else
		if(a<c)
			printf("En buyuk sayi %d",c);
		else
			printf("En buyuk sayi %d",a);		
}
