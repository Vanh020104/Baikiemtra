#include<stdio.h>
void checkNumber(int a){
	if(a % 2 == 0){
		printf("1");
		
	}else printf("0");
	
}
int maint(){
	int a;
	printf("\nNhap gia tri cho n: ");
	scanf("%d", &a);
	checkNumber(a);
	return 0;
}
