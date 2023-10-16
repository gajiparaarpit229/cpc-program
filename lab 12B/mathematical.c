#include<stdio.h>
void main(){
    int i,n;
    float z,s=1.0,e=1.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s*i;
        z=1/s;
        e=e+z;
    }
    printf("%f",e);
}