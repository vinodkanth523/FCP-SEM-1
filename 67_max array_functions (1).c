#include<stdio.h>
int max_array(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements of the array: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int max_value = max_array(arr, size);
    printf("The maximum value in the array is: %d\n", max_value);
    return 0;
}