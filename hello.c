#include <stdio.h>

int main() {
    char string[] = "HELLO";
    
    for(int i=0; i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",string[j]);
        }
        printf("\n");
    }
    return 0;
}