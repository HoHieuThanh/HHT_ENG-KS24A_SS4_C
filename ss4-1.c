#include<stdio.h>
int main(){
	
	int n;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&n);
	if(n > 0){
		printf("day la so duong");
	}
	else if(n < 0){
		printf("day la so am");
	}
	
	return 0;
}