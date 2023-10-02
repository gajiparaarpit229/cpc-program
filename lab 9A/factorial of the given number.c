#include<stdio.h>
int main(){
    int i = 1,n,factorial = 1;
    printf("Enter number for factorial :");
    scanf("%d",&n);
    while(i<=n){
        factorial = factorial*i;
        i++;
    }
    printf("factorial of %d is :%d",n,factorial);
}