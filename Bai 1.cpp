#include<stdio.h>
void checkNumber(int n){
	if(n % 2==0){
		printf("1"); 
	} 
	else printf("0");
	} 

int main(){
	int n;
	printf("\nNhap gia tri cho n: ");
	scanf("%d", &n); 
	checkNumber(n);
	return 0; 
} 
