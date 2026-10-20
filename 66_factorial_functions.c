#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));    
}
int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);
    printf("C(%d,%d) = %d\n",n,r,combination(n,r));
    return 0;
}