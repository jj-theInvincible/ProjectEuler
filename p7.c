//Finding 10001st Prime number..
#include<stdio.h>
int isprime(long int a){
long int i;int c=1;
if((a%2)==0 && a!=2)
c=0;
else if(a==1)
c=0;
else{
for(i=3;i<a/2;i=i+2){
if((a%i)==0)
c=0;
	}
  }
return c;
}

int main(){
long int a=3,count=2;
/*printf("Enter the Number to check:");
scanf("%ld",&a);
if(isprime(a))
printf("No is prime");
else
printf("No is not Prime");*/
while(1){
a=a+2;
if(isprime(a)){
count++;
}
if(count==10001){
printf("The 10001st Prime is: %ld",a);
break;}
}
return 0;
}
