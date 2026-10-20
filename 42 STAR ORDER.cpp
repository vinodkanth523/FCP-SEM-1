/*program to print the picture as follows*/
#include<stdio.h>
int main()
{
	int x,y;
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	for(x=5;x>=1;x--)
	{
		for(y=1;y<=x;y++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	
}

