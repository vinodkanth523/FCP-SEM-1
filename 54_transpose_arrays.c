#include<stdio.h>
int main(){
    int i,j,a[i][j];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the elements of the array:\n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("the transpose of the array is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}