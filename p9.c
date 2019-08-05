#include<stdio.h>

int main(){
int a,b,c,i,j,k;
for(i=1;i<=1000;i++){
	for(j=1;j<=1000;j++){
		for(k=1;k<=1000;k++){
		//	printf("Loop no: %d \n I: %d \nJ: %d \n K: %d\n", l,i,j,k);l++;
			if((i+j+k)==1000){
			if(((i*i)+(j*j)==(k*k))||((k*k)+(i*i)==(j*j))||((j*j)+(k*k)==(i*i))){
			printf("Numbers Are: %d\n %d\n %d\n And The Product is: %d",i,j,k,i*j*k);
		return 0;
	break;
			}
			}
		}
	}
}
return 0;
}
