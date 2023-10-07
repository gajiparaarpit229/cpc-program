#include <stdio.h>
int main() 
{
   int i = 0;
   printf("Character \t ASCII Value");
   for (i = 65; i <=122; i++) 
   {
      printf("%c \t\t %d", i, i);
   }
   return 0;
}