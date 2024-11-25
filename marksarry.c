#include <stdio.h>
int main (){


int stud[5];
int sub[3];
int total;
int pr;

for(int i =1;i<=5;i++){
   for(int j = 0 ;j<3;j++){
   printf("Enter marks:%d\t",j);
    scanf("%d",&sub[j]);
   }
	
  total = sub[0]+sub[1]+sub[2];
  pr =    (total*100)/300;
  printf("total marks %d\t",total);
  printf(" percentage%d\t",pr);
  if(pr>75){
	  printf("A Grade");
  }else if(pr>60 && pr<75){
	   printf("B Grade");
  } else if(pr>45 && pr<60){
	   printf("C Grade");
  }else if(pr>35 && pr<45){
	   printf("D Grade");
  } else{
	  printf("you'r fail");
  }
  printf("\n");
}

