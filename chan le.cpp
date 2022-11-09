#include<stdio.h>
void checkNumber(int n,int m){
	int i;
	if(m<n){
		for(i = m+1;i<n;i++){
			if(i % 2==0)
			printf("\n%d", i);
		}
	}
	if(n<m){
		for(i=n+1;i<m;i++){
			if(i%2==0)
			printf("\n%d", i);
		}
	}
	}
	int main(){
		int i,m,n;
		printf("\nNhap hai so m,n: ");
		scanf("%d%d", &m,&n);
		checkNumber(m,n);
		return 0;
}
