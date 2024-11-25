#include <stdio.h>

int main() {
	int n;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	int j=-n;
	while(j<=n){
	printf("%d\t",j);
	j++;
	}


    return 0;
}