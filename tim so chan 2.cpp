#include<stdio.h>
void checkNumber(int n){
	if(n % 2 == 0){
		printf("la so chan: ");
	}
	else{
		printf("Ko phai la so chan: ");
		
	}
}
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	checkNumber(n);
	return 0; 
}
