#include<stdio.h>
int main(){
	int number;
	printf("Moi nhap vao 5 so nguyen: ");
	scanf("%d",&number);
	int tong;
	while(number>0){
		int charactor;
		charactor = number%10;
		if(charactor%2!=0){
			tong+=charactor;
		
		}	number=number/10;
		 
	}printf("Tong cac so le = %d",tong);
	return 0;
}
