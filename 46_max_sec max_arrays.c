#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n],i,max,sec;
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    sec=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            sec=max;
            max=a[i];
        }else if(a[i]>sec && a[i]!=max){
            sec=a[i];
        }
    }
    printf("The maximum element is %d\n",max);
    printf("The second maximum element is %d\n",sec);
    return 0;
}