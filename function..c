#include <stdio.h>
void sum();

int sum1()
{
    int a=10;
    int b=20;
    int total = 0;
    total = a+b;
    return total;
}
int main ()
{
    int total=0;
    sum();
    total=sum1();
    printf("\nTotal=%d",total);
    return 0;
}
void sum()
{
    int a=10;
    int b=20;
    printf("sum is A+B=%d",a+b);
}

