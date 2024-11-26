#include<stdio.h>
int main(){
	int number, count;
	printf("Nhap vao so nguyen:  ");
	scanf("%d",&number);
	if(number<2){
		printf("So %d khong phai so nguyen to ",number); 
	}else{
		for(int i=2; i<=number;i++){
			if(number%i==0){
			 count+=1;	 
			}
		}
		if (count!=1){
			printf("So %d khong phai so nguyen to ",number); 
		}else{
			printf("So %d la so nguyen to ",number);
		} 
	}
	return 0; 
} 
