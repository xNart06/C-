#include<stdio.h>

int main(){
	
	char Name[10],Surname[10],Age[2],Job[30];
	
	printf("\nName: ", Name); scanf("%s",Name);
	
	printf("\nSurname: ",Surname); scanf("%s",Surname);
	
	printf("\nAge: ",Age); scanf("%s",Age);
	
	printf("\nJob: ",Job); scanf("%s",Job);
	
	printf("Mesleginiz: %s - Yasiniz: %s",Job,Age);
	
	/*Kullan�c�dan veri almadan �nceki printf ifadesi i�erisinde
	  %'lik semboller kullan�lamaz*/
	
	return 0;
}
