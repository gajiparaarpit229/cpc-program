#include<stdio.h>
int main(){
    int n1 = 100,n2 = 200;
    while(n1<=n2){
        if(n1 % 7 == 0 && n1 % 5 != 0){
            printf("%d \n",n1);
        }
        n1++;
    }
}