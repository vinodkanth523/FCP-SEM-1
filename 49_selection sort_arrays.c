#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements in the array:\n");
    scanf("%d",&n);
    int a[n],i,j,temp,max;
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(a[j]>a[max]){
                max=j;
            }
        }
        temp=a[i];
        a[i]=a[max];
        a[max]=temp;
    }
    printf("the elements of the array after selection sort are:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}