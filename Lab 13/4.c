#include<stdio.h>
#include<math.h>
int armstrong(int n)
{	int a,b,d,e=0,s;
	for(b=0,s=n;s>0;b++)
		s/=10;
	for(s=n;s>0;s/=10)
	{	d=s%10, e+=pow(d,b);
	}
	if(n==e)	a=1;
	else		a=0;
	
	return a;
}
int prime(int c)
{	int a,e;
	for(a=1;a<c;a++)
		{	printf("a=%d ",a);
			if(c%a!=0)
			{	if(a-1==c)	e=1;
				else		e=0;
			}
			else
			{	e=0;
				break;
			}	
		}
	return e;
}
void main()
{
	int a;
	scanf("%d",&a);
	if(prime(a))		printf("prime");
	if(armstrong(a))	printf("armstrong");
}
