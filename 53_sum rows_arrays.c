#include<stdio.h>
int main(){
    int i,j,a[i][j],sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the elements of the array:\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=a[i][j];
        }
        printf("the sum of elements in row %d is: %d\n", i+1, sum);
    }
    return 0;
}