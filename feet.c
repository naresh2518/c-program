#include <stdio.h>
void sum()

{
    int feet=0;
    int inches=12;
    int total;
    
    printf("enter the value of feet:");
    scanf("%d",&feet);
    
    total=feet*inches;
    printf("total inches is:%d",total);
}
int main(){
    sum();
}
