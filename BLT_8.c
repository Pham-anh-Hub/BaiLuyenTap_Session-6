#include<stdio.h>
int main(){
	int money;
	float interest; 
	printf("Nhap vao tien gui ");
	scanf("%d",&money);
	printf("Nhap vao lai suat ");
	scanf("%f",&interest);

	float tienNhan=money*(1+interest*0.01)*(1+interest*0.01)*(1+interest*0.01);
	printf("\nTien nhan duoc la trong 3 thang : %.3f VND",tienNhan);
	
	float tienLai=tienNhan-money;
	printf("Tien lai la: %.3f VND ",tienLai);
	
	
	return 0; 
} 
