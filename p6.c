#include<stdio.h>

int main(){
long int sumsqr=0,sqrsum=0,result;
int i,j;
for(i=1;i<=100;i++){
sumsqr+=i*i;}
for(j=0;j<=100;j++){
sqrsum+=j;
}
sqrsum=sqrsum*sqrsum;
result=sqrsum-sumsqr;
printf("Result: %ld",result);
}
