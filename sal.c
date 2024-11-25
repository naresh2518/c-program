#include <stdio.h>
int main (){
int salary;
float hra,da,amt;
printf("enter the salary:");
scanf("%d",&salary);
if(salary<=5000){
	hra=salary*0.08;
	da=salary*0.20;
	amt=salary+hra+da;
	printf("amt salary of employee:%2f",amt);
}else if(salary>5000&&salary<=10000){
	hra=salary*0.12;
	da=salary*0.30l;
	amt=salary+hra+da;
	printf("amt salary of employee:%2f",amt);
}else if(salary>10000&&salary<=15000){
	hra=salary*0.15;
	da=salary*0.40;
	amt=salary+hra+da;
	printf("amt salary of employee:%2f",amt);
}else if(salary>=15000){
	hra=salary*0.20;
	da=salary*050;
	amt=salary+hra+da;
}
	printf("amt salary of employee:%2f",amt);
	return 0;
}