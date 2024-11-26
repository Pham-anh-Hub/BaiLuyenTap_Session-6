#include <stdio.h>

int main() {
  int number, charactor;
  int sum=0;
  for(int i=100; i<=999; i++){
  	number=i;
  	sum=0;
  	while(number!=0){
  		charactor= number%10;
  		sum+=charactor*charactor*charactor;
  		number=number/10;
  	}
  	if(sum==i){
  		printf("%d \n",i);
  	}
  }
  return 0;
}
