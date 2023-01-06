#include<stdio.h>
int main(void)
{
	int bes,iki,on,n;
	do
	{	scanf("%d",&n);
		if(n%5==0)
		{	bes=1;
			printf("5'e bolunur.\n");
		}		
		else			bes=0;
		if(n%2==0)
		{	iki=1;
			printf("2'ye bolunur.\n");
		}
		else			iki=0;
		if(bes==1&&iki==1)
		{	on=1;
			printf("10'a bolunur.\n");
		}
		else				on=0;	
	}
	while(n!=-1);
	return 0;
}
