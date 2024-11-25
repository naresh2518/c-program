#include<stdio.h>
int main(){
int n;
printf("enter the n:");
scanf("%d",&n);
for (int i=-n;i<=n;i++){
printf("%d\t",i);
}
return 0;
}