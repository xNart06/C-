#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
	
	srand(time(NULL)); // program her �al��t���nda farkl� say� �retmesi i�in gereken fonsiyon
	setlocale(LC_ALL, "Turkish");
	
	char user[5]; int comp;
	
	comp = rand() %3 + 1; // 1 ile 3 aras� rastgele say� �retecek
	
		printf("		*****Ta�-Ka��t-Makas*****\n");
		
		
		printf("Ta�--Ka��t--Makas\n",user); scanf("%c",&user);
		printf("%c");
	
		if(comp==1){
			printf("Bilgisayar: TA�");
		}
		else if(comp==2){
			printf("Bilgisayar: KA�IT");
		}
		else{
			printf("Bilgisayar: MAKAS");
		} // Rastgele �retilen say�ya g�re program string ifade tan�ml�yor
		

		
	

	
	if(user=="ta�"){
		if(comp==1){
			printf(" ==> BERABERE");}
		else if(comp==2){
			printf(" ==> !!KAYBETT�N!!");}
		else{
			printf(" ==> **TEBR�KLER KAZANDIN**");}
	}
	else if(user=="ka��t"){
		if(comp==1){
			printf(" ==> **TEBR�KLER KAZANDIN**");}
		else if(comp==2){
			printf(" ==> BERABERE");}
		else{
			printf(" ==> !!KAYBETT�N!!");}
	}
	else{
		if(comp==1){
			printf(" ==> !!KAYBETT�N!!");}
		else if(comp==2){
			printf(" ==> **TEBR�KLER KAZANDIN**");}
		else{
			printf(" ==> BERABERE");}
	}
		
	
	return 0;
}
