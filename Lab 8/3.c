/*Determine and Output Whether Number N is Even or Odd.*/

#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	a%=2;
	if (a==0)
		printf("Cift");
	else
		printf("Tek");	
}
