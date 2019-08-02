//To find Largest palindrome formed by multiplication of two-3 Digit numbers.
#include<stdio.h>
int check(long int a){
long int in=a,p=0;
int i=0,k;
while((a/10)>=0){
k=a%10;
p=k + p*10;
if((a/10)==0)
break;
a=a/10;
}
if(in==p){
return 1;
}
else{
return 0;}
}
int main(){
int i,j;
long int pl=0,l;
for(i=100;i<999;i++){
for(j=100; j<999;j++){
l=i*j;
if(check(l)){
if((i*j)>pl)
pl=i*j;
}
}}
printf("Largest Palindrome formed by Product of two 3 Digit Numbers is %ld",pl);
return 0;
}
