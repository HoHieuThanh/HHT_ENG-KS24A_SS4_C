int main(){
	
	int n;
	printf("nhap vao 1 so nguyen: ");
	scanf("%d",&n);
	if(n%3==0 & n%5==0){
		printf("day la so chia het cho ca 3 va 5");
	}
	else if(n%3==0){
		printf("day la so chia het cho 3");
	}
	else if(n%5==0){
		printf("day la so chia het cho 5");
	}
	else {
		printf("day la so khong chia het cho 3 va 5");
	}
	return 0;
}