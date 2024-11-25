#include<stdio.h>

struct billdetail 
{
    int rate;
    int qty;
    int amt;
    int dis;
    int gst;
    int billamt;
    int netbill;
    int total;/* data */
};
int main(){
    struct billdetail s1[10];
    for(int i=0;i<10;i++){
        s1[i].rate=0;
        s1[i].qty=0;
        s1[i].amt=0;
        s1[i].dis=0;
        s1[i].gst=0;
        s1[i].billamt=0;
        s1[i].netbill=0;
        
        printf("enter the rate:");
        scanf("%d",&s1[i].rate);

        printf("enter the qty:");
        for(int j=0;j<1;j++){
            scanf("%d",&s1[i].qty);
        }
    
        s1[i].amt=s1[i].rate*s1[i].qty;
        s1[i].dis=s1[i].amt*0.05;
        s1[i].billamt=s1[i].amt-s1[i].dis;
        s1[i].gst=s1[i].billamt*0.18;
        s1[i].netbill=s1[i].billamt+s1[i].gst;
    
    

printf("rate is:%d",s1[i].rate);
printf("qty is:%d",s1[i].qty);
printf("amt is:%d",s1[i].amt);
printf("dis is:%d",s1[i].dis);
printf("gst is:%d",s1[i].gst);
printf("billamt is:%d",s1[i].billamt);
printf("netbill is:%d",s1[i].netbill);



return 0;
}
}



