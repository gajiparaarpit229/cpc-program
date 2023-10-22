#include <stdio.h>  
int main() {  
    int matrix[3][4];  
      
    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 4; j++) {  
            matrix[i][j] = i * 4 + j;  
        }  
    }  
      
    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 4; j++) {  
            printf("%d ", matrix[i][j]);  
        }  
        printf("\n");  
    }  
      
    return 0;  
}