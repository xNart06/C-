#include<stdio.h>

int main(){
	
	float ort, sinav_1, sinav_2;
	
	printf("1. sinav notunuz: ", sinav_1); scanf("%f",&sinav_1);
	
	printf("2. sinav notunuz: ", sinav_2); scanf("%f",&sinav_2);
	
		ort=(sinav_1+sinav_2)/2;

	printf("Ortalamaniz: %2.2f",ort);
	
	return 0;
}
