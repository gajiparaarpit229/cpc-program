#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter n1:");
    scnaf("%d",&n1);
    while(n1<=n2)
    {
        if(n1 % 2 == 0){
            printf("%d \n",n1);
        }
        n1++;
        while(n2<=n1){
            if(n2 % 2 == 0){
                printf("%d \n",n2);
            }
            n2++;
        }
    }
}