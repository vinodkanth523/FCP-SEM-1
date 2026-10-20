/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND FIND SUM*/
#include<stdio.h>
int main()
{
	int A[10],x,y,sum;
	printf("Enter any 10 numbers");
	for(x=0;x<10;x++)
	{
		scanf("%d",&A[x]);
	}
	sum=0;
	for(x=0;x<10;x++)
	{
		sum=sum+A[x];
	}
}
