#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	srand(time(NULL));	
	setlocale(LC_ALL, "Turkish");
	
	
	char user[5]; int comp;
	
	comp = rand() %3 + 1;
	
			if(comp==1){
				printf("Bilgisayar = TA�");
			}
			else if(comp==2){
				printf("Bilgisayar = KA�IT");
			}
			else{
				printf("Bilgisayar = MAKAS");
			}


	printf("%c",comp);
	
	
	return 0;
}
