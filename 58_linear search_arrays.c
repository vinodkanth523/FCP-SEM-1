#include<stdio.h>
int main(){
   int a[10],i,n,search,flag=0;
   printf("enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++){
          scanf("%d",&a[i]);
     }
    printf("enter the element to be searched:\n");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(a[i]==search){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("the element is found at position %d\n",i+1);
    }
    else{
        printf("the element is not found in the array\n");
    }
    return 0;
}