#include<stdio.h>
#define q 5
void main()
{	int c,b[2],a[q]={2,3,5,7};
	scanf("%d",&b[0]);
	for(c=0;c<q;c++)
		if(b[0]<a[c])	break;
	for(;c<q;c++)
	{	b[1]=a[c],	a[c]=b[0],	c++,	b[0]=a[c],	a[c]=b[1];
	}
	for(c=0;c<q;c++)	for(c=0;c<q;c++)
	for(;c<q;c++)
		printf("%d,",a[c]);
}
