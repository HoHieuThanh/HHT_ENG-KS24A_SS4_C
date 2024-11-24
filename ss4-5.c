#include<stdio.h>
int main(){
	
	int a, b, c;
	printf("nhap vao so thu nhat: ");
	scanf("%d",&a);
	printf("nhap vao so thu hai: ");
	scanf("%d",&b);
	printf("nhap vao so thu ba: ");
	scanf("%d",&c);
	
	if((a<c && c<b) || (b<c && c<a)){
		printf("so thu ba nam trong khoang giua so thu nhat va so thu hai");
	}
	else{
		printf("so thu ba khong nam trong khoang giua so thu nhat va so thu hai");
	}
	return 0;
}