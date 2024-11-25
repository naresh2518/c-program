#include<stdio.h>
int facto(int n){
    if(n==1||n==0){
        return 1;
    }else {
        return n*facto(n-1);
    }
}
int main(){
    int n;
    printf("enter the value of a:");
    scanf("%d",&n);
    int total= facto(n);
    printf("factorial is %d",total);
}