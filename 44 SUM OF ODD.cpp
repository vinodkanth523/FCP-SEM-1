/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVERY NUMBER*/
#include<stdio.h>
int main()
{
	int A[10],x,y;
	for(x=0;x<10;x++)
	{
		scanf("%d",&A[x]);
	}
	for(x=0;x<10;x++)
	{
		if(A[x]%2==0)
		{
			printf("%d",A[x]);
		}
		else 
		if(A[x]%2!=0)
		{
		    printf("%d",A[x]);
		}
	}
}
