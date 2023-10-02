#include<stdio.h>
int main(){
    int n,i = 0;
    while(i<=0){
        printf("Enter a number n:");
        scanf("%d",&n);
    }
    if(n % 2 == 0){
        printf("Even number \n");
    }
    else{
        printf("Odd number \n");
    }
    i++;
}