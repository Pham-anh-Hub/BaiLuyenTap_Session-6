#include<stdio.h>
int main(){
	int money, month;
	float interest; 
	printf("Nhap vao tien gui ");
	scanf("%d",&money);
	printf("Nhap vao so thang gui ");
	scanf("%d",&month);
	printf("Nhap vao lai suat ");
	scanf("%f",&interest);
	
	float tienLai= money*interest*0.01*month/12;
	printf("Tien lai la: %.3f VND ",tienLai);
	float tienNhan=money+tienLai;
	printf("\nTien nhan duoc la: %.3f VND",tienNhan);
	
	return 0; 
} 
