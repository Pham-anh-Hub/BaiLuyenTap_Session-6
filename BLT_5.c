#include<stdio.h>
int main(){
	int month, year;
	printf("Nhap thang: ");
	scanf("%d",&month);
	printf("Nhap nam: ");
	scanf("%d",&year);
	if(month>=1 && month<=12 ){
	
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
			printf("Thang %d cua nam %d co 31 ngay",month, year);
		}else if(month==4 || month==6 || month==9 || month==11){
			printf("Thang %d cua nam %d co 30 ngay",month, year);
		}else{
	
			if(year%4==0 && year%100!=0 || year%400==0){
				printf("Thang %d cua nam %d co 29 ngay ",month, year);
				
			}else{
				printf("Thang %d cua nam %d co 28 ngay ", month, year);
			}
			}
		
	}else{
		printf("Thang khong hop le "); 
	}
	return 0; 
	
} 
