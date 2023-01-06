/*Convert Temperature from Fahrenheit to Celsius.*/

#include<stdio.h>
void main()
{
	float c,f;
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("%f",c);
}
