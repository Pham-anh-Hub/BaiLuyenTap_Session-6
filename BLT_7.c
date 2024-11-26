#include<stdio.h>
int main(){
	int number;
	printf("Moi nhap so nguyen ");
	scanf("%d",&number);
	if(number){
	
	printf("\nCac boi chung cua so do la: "); 
	for (int i=1; i<=number;i++){
		if(number%i==0){
			printf("%d\t",i); 
		}
	}
	}else{
	printf("So khong khong co boi chung");
	}
	return 0; 
}
