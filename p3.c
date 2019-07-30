//find prime factor
#include<stdio.h>
#include<math.h>
int isprime(long int a){
long int i;
int y=1;
if(a==1)
return 0;
for(i=2;i<=a/2;i++){
if(a%i==0){
y=0; break;}
}
return y;
}
int main(){
long int i;
long int res=2;
long int x=600851475143;
//long int x=57;
//long int c;
//printf("enter any no to check:");
//scanf("%ld",&c);
//printf("\n%d",isprime(c));
for(i=2;i<=x;i=i+1){
if(x%i==0){
x=x/i;
if(isprime(i)){
if(res<i)
res=i;
printf("\n%ld", i);
}
}
}
//printf("%ld", res);
return 0;
}
