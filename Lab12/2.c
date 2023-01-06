#include<stdio.h>
#include<string.h>
#define n 20
int main(void)
{
	int a,b=0,c;
	char str1[n],str2[n];
	printf("Metni girin:");
	gets(str1);
	for(c=0;str1[c]!='\n';c++)
	{	a=str1[c];
		if(a>=97&&a<=122)
			str2[b]=str1[c],	b++;
	}
	puts(str2);
	return 0;
}
