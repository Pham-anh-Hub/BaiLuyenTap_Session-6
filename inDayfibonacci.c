#include<stdio.h>
int main(){
	int num;
	int a,b,c;
	printf("Nhap vao so phan tu fibonaci muon in ra: ");
	scanf("%d",&num);
	for(int i=0; i<num; i++){
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;	
	}
	return 0;
}
