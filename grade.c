#include <stdio.h>
int main(){
int hindi,eng,maths,total;
float marks;
printf("enter the marks of hindi:");
scanf("%d",&hindi);
printf("enter the marks of eng:");
scanf("%d",&eng);
printf("enter the marks of maths:");
scanf("%d",&maths);
total=hindi+eng+maths;
marks=total/3;
if(marks>75){
  printf("grade is A");
}else if (marks<75&&marks>=60){
  printf("grade is B");
}else if (marks<60&&marks>=45){
  printf("grade is C");
}else if (marks<45&&marks>=35){
  printf("grade is D");
}else if(marks<35){
  printf("fail");
}
return 0;
}