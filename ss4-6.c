#include<stdio.h>
int main(){
	
	int sodien, socu, somoi, tien;
	printf("nhap vao so dien dau thang ");
	scanf("%d",&socu);
	printf("nhap vao so dien cuoi thang ");
	scanf("%d",&somoi);
	sodien = somoi - socu;
	
	if(0<=sodien && sodien<50){
		tien = sodien * 10000;
		printf("tien dien thang nay la: %d",tien);
	}
	else if(50<=sodien && sodien<100){
		tien = sodien * 15000;
		printf("tien dien thang nay la: %d",tien);
	}
	else if(100<=sodien && sodien<150){
		tien = sodien * 20000;
		printf("tien dien thang nay la: %d",tien);
	}
	else if(150<=sodien && sodien<200){
		tien = sodien * 25000;
		printf("tien dien thang nay la: %d",tien);
	}
	else if(200<=sodien){
		tien = sodien * 30000;
		printf("tien dien thang nay la: %d",tien);
	}
	else {
		printf("so dien nhap vao khong hop le");
	}
	
	return 0;
}