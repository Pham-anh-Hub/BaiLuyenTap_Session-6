#include<stdio.h>
int main(){
	int num = 100;
	
	for (int i=1;i<=num;i++){
		if(i%3==0 && i%5==0){
			printf("\nFizzBuzz");
		}else if(i%3==0){
			printf("\nFizz");
		}else if(i%5==0){
			printf("\nBuzz");
		
		}else{
			printf("\n%d",i);
		}
	
	
	}
	return 0; 
}
