#include <stdio.h>

int main() {
	int num=1;
    for(int i=0;i<5;i++){
for(int j=0;j<=i;j++){
	printf("%d\t",num++);
}
printf("\n");
}


    return 0;
}