#include<stdio.h>
#include<string.h>
#define n 20
int main(void)
{
	char str1[n],str2[n];
	printf("Ilk ismi girin:");
	gets(str1);
	printf("Ikinci ismi girin:");
	gets(str2);
	strcat(str1,str2);
	puts(str1);
}
