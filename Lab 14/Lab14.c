#include<stdio.h>
#include<string.h>
#define n 3
void function(int a[n]);
void main()
{
	int c,a[n];
	for(c=0;c<n;c++)
		scanf("%d",&a[c]);
	function(a);
}
void function(int a[n])
{	int c,s1,s2,b[2];
	for(c=0;c<n;c++)
		if(s1<a[c])		s2=s1,	s1=a[c];
	printf("En buyuk: %d\n2. en buyuk: %d",s1,s2);
}
