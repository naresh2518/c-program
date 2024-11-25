#include<stdio.h>
#include<string.h>

int main(){

    char name[]={'A','H','I','R','\0'};

    int i=0;
    while (name[i]!='\0'){
    printf("%c",name[i]);
    i++;
        
    }
    printf("%d",i);
    
    return 0;
}