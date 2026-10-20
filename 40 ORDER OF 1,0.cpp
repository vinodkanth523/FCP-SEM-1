/*PROGRAM TO PRINT NUMBERS IN THE FORM OF 1,0*/
#include<stdio.h>
int main()
{
	int x,y;
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=5;y++)
		{
			if(x==y)
			{
				printf("1");
			}
			else
			if(x!=y)
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
