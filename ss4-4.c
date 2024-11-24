#include<stdio.h>
int main(){
	
	int month;
	printf("nhap thang: ");
	scanf("%d",&month);
	if(month==2){
		printf("28 hoac 29 ngay");
	}
	else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		printf("31 ngay");
	}
	else if(month==4 || month==6 || month==9 || month==11){
		printf("30 ngay");
	}
	else {
		printf("thang khong hop le");
	}
	
	return 0;
}