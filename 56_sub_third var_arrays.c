#include<stdio.h>
int main(){
     int i,j,a[i][j],b[i][j],c[i][j];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the elements of the first array:\n");
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the elements of the second array:\n");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    } 
    printf("the difference of the two arrays is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}