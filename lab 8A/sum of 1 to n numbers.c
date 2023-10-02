#include<stdio.h>
int main(){
    int i=1,sum=0,n;
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of %d is %d",n,sum);
}