#include<stdio.h>
int main(){
	int n;//So cac so nguyen to muon hien thi 
	int number; //Kiem tra so nguyen to 
	int count;//Dem so luong so luong so nguyen to in ra man hinh
	int checkNum=2 ;  //So nguyen to dau tien = 2 
	
	printf("Nhap vao so luong so nguyen to muon in ra  ");
	scanf("%d",&n); 
	
	
	
	while(count<=n){
		number = 0; 
		for(int i=1; i<=checkNum;i++ ){
			if(checkNum%i==0){
				number++;
				 
			} 
		}if(number==2){
			printf("\tSo nguyen to la: %d",checkNum);
			count++; 
		}
		checkNum++; 
		
	}
	return 0; 
} 
