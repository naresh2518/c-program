#include<stdio.h>

int main(){
    int a=10;
    int b=20;
    printf("%d\n",&a);
    printf("%d\n",&b);

    int *ptr1;
    ptr1=&a;
    int *ptr2;
    ptr2=&b;

    printf("stored value of a %d\n",*ptr2);
    printf("stored value of b %d\n",*ptr1);
    
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
    
    printf("*ptr1=%d\n",*ptr1);
    printf("*ptr2=%d\n",*ptr2);
}