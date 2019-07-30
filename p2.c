#include<stdio.h>

int main(){
unsigned int prev=1;
unsigned int nxt=2;
unsigned int sum=0;
unsigned int temp;
sum+=nxt;
while(nxt<=4000000){
temp=nxt;
nxt=prev+nxt;
prev=temp;
if(nxt%2==0)
sum+=nxt;
}
printf("%d",sum);
return 0;
}
