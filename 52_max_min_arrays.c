#include<stdio.h>
int main(){
    int i,j,a[i][j],max,min;
    printf("enter the elements of the array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    min=a[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("the maximum element in the array is: %d\n", max);
    printf("the minimum element in the array is: %d\n", min);
    return 0;
}