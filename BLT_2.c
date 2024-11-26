#include<stdio.h>
int main(){
	int number;
	printf("Moi nhap vao 5 so nguyen: ");
	scanf("%d",&number);
	int soChan=0, soLe=0;
	while(number>0){
		int charactor;
		charactor = number%10;
		if(charactor%2!=0){
			soLe+=1;
			
		}else{
			
			soChan+=1;
		}number=number/10;
			
			
		}printf("So cac so le = %d",soLe);
	 	printf("\n1So ca so chan = %d",soChan);
		 return 0;
	}
	
	
