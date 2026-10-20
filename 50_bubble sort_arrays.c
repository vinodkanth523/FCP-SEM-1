#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements in the array:\n");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the elements of the array after bubble sort are:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}