/*PROGRAM TO READ 10 NUMBER IN AN ARRAY AND PRINT NO OF POSITIVE,NEGATIVE AND ZERO NUMBERS*/
#include<stdio.h>
int main()
{
	int A[10],x,y,possum=0,negsum=0,zerosum=0;
	printf("Enter any 10 numbers : \n");
	for(x=0;x<10;x++)
	{
		scanf("%d",&A[x]);
	}
	for(x=0;x<10;x++)
	{
			if(A[x]>0)
			{
				possum=possum+1;
			}
	}
		
	for(x=0;x<10;x++)
	{
			if(A[x]<0)
			{
				negsum=negsum+1;
			}

	}
		
	for(x=0;x<10;x++)
	{
			if(A[x]==0)
			{
			     zerosum=zerosum+1;
			}
	}
	printf("The total number of positive numbers = %d",possum);
	printf("\nThe total number of negative numbers = %d",negsum);
	printf("\nThe total number of zeroes = %d",zerosum);	
}
