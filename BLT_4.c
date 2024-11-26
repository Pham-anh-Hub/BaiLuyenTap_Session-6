#include<stdio.h>
int main(){
	int a, b, c;
	
	printf("Nhap he so a: ");
	scanf("%d",&a);
	printf("Nhap he so b: ");
	scanf("%d",&b);
	printf("Nhap he so c: ");
	scanf("%d",&c); 
	printf("Phuong trinh can tinh la: %dx^2 + %dx + %d = 0",a, b, c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("\nPhuong trinh co vo so nghiem "); 
			}else{
				printf("\nPhuong trinh vo nghiem");	
			} 	
		}else{
			printf("\nPhuong trinh co nghiem: x=-%d/%d=%.2f",c, b,-c/b); 
		} 
	}else{
		float  delta = b*b - 4*a*c;
		if(delta == 0){
			printf("\nPhuong trinh co nghiem kep x1=x2= -b/2a"); 
		}else if(delta>0){
			printf("\nPhuong trinh co hai nghiem phan biet"); 
		}else{
			printf("\nPhuong trinh vo nghiem"); 
		}
	}
	
	return 0; 
} 
