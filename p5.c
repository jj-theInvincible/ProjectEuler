//Problem-4 What is the smallest number that is evenly divisble by all nos from 1 to 20
#include<stdio.h>
int main(){
long int num,i=1,j,chk;
while(1){
num =20*(i);
for (j=2;j<=20;j++){
if((num%j)==0)
chk=1;
else{ 
chk=0;
break;}
}
if(chk){
break;}
i++;
}
printf("\nThe Number Evenly divisible by numbers from 1 to 20 is %ld",num);
return 0;
}
