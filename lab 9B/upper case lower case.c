#include<stdio.h>
int main(){
    int c,A = 65,a = 97;
    printf("Which Alphabet you want?(1 or 2)");
    printf("\n Press 1 for big alphabets.\n Press 2 for small alphabets.");
    scanf("\t \t \t %d",&c);
    if(c == 1)
    {
        while(A <= 90){
            printf("%c",A);
            A++;
        }
        return 0;
    }
    else if(c == 2)
    {
        while(a <= 122)
        {
            printf("%c",a);
            a++;
        }
        return 0;
    }
    else{
        printf("Choose correct option");
        return 1;
    }
    return 0;
}