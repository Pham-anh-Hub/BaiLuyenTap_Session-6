#include<stdio.h>
int main(){
	int day, month;
	printf("Nhap ngay sinh: ");
	scanf("%d",&day);
	printf("Nhap thang sinh: ");
	scanf("%d",&month);
	
	if(month==12 && day>=22 || month==1 && day<=19 ){
		printf("Day la cung Ma Ket"); 
	}else if(month==1 && day>=20 || month==2&& day<=18){
		printf("Cung Bao Binh"); 
	}else if(month==2 && day>=19 || month==3&& day<=20){
		printf("Cung Song Ngu");
	}else if(month==3 && day>=21 || month==4&& day<=19){
		printf("Cung Bach Duong ");
	}else if(month==4 && day>=20 || month==5&& day<=20){
		printf("Cung Kim Nguu");
	}else if(month==5 && day>=21 || month==6&& day<=21){
		printf("Cung Song Tu");
	}else if(month==6 && day>=22 || month==7&& day<=22){
		printf("Cung Cu Giai ");
	}else if(month==7 && day>=23 || month==8&& day<=22){
		printf("Cung Su tu ");
	}else if(month==8 && day>=23 || month==9&& day<=22){
		printf("Cung Xu nu");
	}else if(month==9 && day>=23 || month==10&& day<=22){
		printf("Cung Thien Binh");
	}else if(month==10 && day>=23 || month==11&& day<=22){
		printf("Cung Bo Cap");
	}else if(month==11 && day>=23 || month==12&& day<=21){
		printf("Cung Nhan Ma");
	}
	return 0;
}
	
 
