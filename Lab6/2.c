#include<stdio.h>
int main(void)
{
	int c=1,e=1;
	for(;;c++)
	{	e*=c;
		if(e/1000000000!=0)
		{	printf("%d",c);
			break;
		}
	}
	return 0;
}
