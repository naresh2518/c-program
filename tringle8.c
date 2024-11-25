#include <stdio.h>

int main() {
	int num=65;
    for(int i=1;i<=5;i++){
for(int j=1;j<=i;j++){
   if(j%2==0){
	printf("%c\t",num++);
}else{
printf("%c\t",(num++)+32);
}
}
printf("\n");}


return 0;
}