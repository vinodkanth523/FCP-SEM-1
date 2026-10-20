#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements in the array:\n");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the elements of the array after reversing are:\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}