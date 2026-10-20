#include<stdio.h>
int armstrong(int num) {
    int remainder, result = 0;
    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }
    if (result == num) {
        return 1; 
    } else {
        return 0; 
    }
}
int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}