#include<stdio.h>
#define n 20
void function (char s[n]);
void main()
{	char s[n];
	gets(s);
	function(s);
}
void function(char s[n])
{	int a,b=123,c1,c2;
	char d[n];
	for(c1=0;c1<n;c1++)
	{	
		for(c2=0;c2<n;c2++)
		{	a=s[c2];
			if(a==32)		d[c2]=s[c2];
			else if(a<b)	b=a;
			else			;
		}
		if(d[c1]!=' ')		d[c1]=b;
		else				c1++,	d[c1]=b;
	}
	puts(d);
}
