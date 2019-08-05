//Finding Sum of primes below 2000000
#include<stdio.h>
#include<math.h>
int isprime(long int a){
long int i;int c=1;
if((a%2)==0 && a!=2)
c=0;
else if(a==1)
c=0;
else{
for(i=3;i<a && i<2000;i=i+2){
if((a%i)==0)
c=0;
	}
  }
return c;
}

int main(){
long int k=1,sum=0;
while(k<2000000){
if(isprime(k))
sum=sum+k;
printf("Number: %ld\n Sum %ld \n",k,sum);
k=k+2;
}
printf("The Sum is: %ld",sum+2);//Since 2 was excluded in Loop
return 0;
}
