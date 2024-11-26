#include<stdio.h>
int main(){
	int pass = 1234, check;
	printf("Moi nhap mat khau gom 4 chu so: ");
		
	while(check != pass){

		scanf("%d",&check);
		if(check == pass){
		printf("\tChinh xac !!");
			break;
		}else{
			printf("Chua chinh xac, moi nhap lai: ");
		}
		}
	
	return 0;
}
