#include<stdio.h>
int main(){
    int i = 1,x,y,power = 1;
    printf("Enter number x,y :");
    scanf("%d %d",&x,&y);
    while(i<=y){
        power = power*x;
        i++;
    }
    printf(x^y is : %d,power);
}