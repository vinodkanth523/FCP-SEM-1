#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    int a[n],i,key,count=0;
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be counted:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    printf("the element %d occurs %d times in the array\n",key,count);
    return 0;
}