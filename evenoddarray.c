#include<stdio.h>
int main(){
    int a[10],i,oddsum=0,evensum=0;
    printf("Enter upto 5 Values: ");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    for(i=0; i<10; i++)
    {
        if(a[i]%2==1){
            oddsum=oddsum+a[i];}
            else{
               evensum=evensum+a[i]; 
            }
    }
    printf("Total Sum of Odd values is: %d ",oddsum);
    
   
    printf("Total Sum of even values is: %d ",evensum);
   
} 