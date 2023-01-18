#include<stdio.h>
#include<string.h>
int function(char s[40]);
void main()
{	char s[40];
	gets(s);
	printf("%d",function(s));
	
}
int function(char s[40])
{	int c,k,a;
	for(c=0,a=0;c<40;c++)
	{	k=s[c]; k=(k<123&&k>96)?k-32:k;
		if(k==65||k==69||k==73||k==79||k==85)	a++;
	}
	return a;
}
