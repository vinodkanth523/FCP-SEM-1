#include<stdio.h>
int main(){
    int a[10],b[10],temp,i;
    printf("enter the elements of the first array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements of the second array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("the elements of the first array after swapping are:\n");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("the elements of the second array after swapping are:\n");
    for(i=0;i<10;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}