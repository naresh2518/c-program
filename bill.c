#include <stdio.h>
int main() {
int units;
float amt,totalamt,minimumcharge;
printf("enter the number of units");
scanf("%d",&units);
if(units<=100){
amt=units*0.60;
}else if (units<=200){amt=100*0.60+(units-100)*0.80;
}else if (units<=300){amt=200*0.60+100*0.80+(units-200)*0.90;
}else {amt=100*0.60+100*0.80+100*0.90+(units-300)*0.15;}
minimumcharge=50;
totalamt=minimumcharge+amt;
printf("total bill is:%2f",totalamt);
return 0;
}