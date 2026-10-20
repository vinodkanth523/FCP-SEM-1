#include<stdio.h>
int main(){
    int a[10],b[10],c[10],i,n;
    printf("enter the elements of the array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements of the second array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        c[i]=a[i]+b[i];
    }
    printf("the sum of the two arrays is:\n");
    for(i=0;i<10;i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}