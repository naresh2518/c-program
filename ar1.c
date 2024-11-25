#include <stdio.h>

int main() {
	int number[2];
	for(int i=0;i<2;i++){
	    printf("enter the element of index:%d:",i);
		scanf("%d",&number[i]);
		}
		for(int i=0;i<2;i++){
		    printf("%d\t",number[i]);
		    
		}
    return 0;
}