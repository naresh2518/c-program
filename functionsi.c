#include <stdio.h>
int interest(int P,int R,int T){
    int total=0;
    total=P*R*T/100;
    return total;
}
int main(){
 int total=0;
 int P;
 int R;
 int T;

 printf("enter the value of P");
 scanf("%d",&P);   
 printf("enter the value of R");
 scanf("%d",&R);
 printf("enter the value of T");
 scanf("%d",&T);
 total=interest(P,R,T);
 printf("total interest is:%d",total);     
}
