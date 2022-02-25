#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
	
	srand(time(NULL)); // program her çalýþtýðýnda farklý sayý üretmesi için gereken fonsiyon
	setlocale(LC_ALL, "Turkish");
	
	char user[5]; int comp;
	
	comp = rand() %3 + 1; // 1 ile 3 arasý rastgele sayý üretecek
	
		printf("		*****Taþ-Kaðýt-Makas*****\n");
		
		
		printf("Taþ--Kaðýt--Makas\n",user); scanf("%c",&user);
		printf("%c");
	
		if(comp==1){
			printf("Bilgisayar: TAÞ");
		}
		else if(comp==2){
			printf("Bilgisayar: KAÐIT");
		}
		else{
			printf("Bilgisayar: MAKAS");
		} // Rastgele üretilen sayýya göre program string ifade tanýmlýyor
		

		
	

	
	if(user=="taþ"){
		if(comp==1){
			printf(" ==> BERABERE");}
		else if(comp==2){
			printf(" ==> !!KAYBETTÝN!!");}
		else{
			printf(" ==> **TEBRÝKLER KAZANDIN**");}
	}
	else if(user=="kaðýt"){
		if(comp==1){
			printf(" ==> **TEBRÝKLER KAZANDIN**");}
		else if(comp==2){
			printf(" ==> BERABERE");}
		else{
			printf(" ==> !!KAYBETTÝN!!");}
	}
	else{
		if(comp==1){
			printf(" ==> !!KAYBETTÝN!!");}
		else if(comp==2){
			printf(" ==> **TEBRÝKLER KAZANDIN**");}
		else{
			printf(" ==> BERABERE");}
	}
		
	
	return 0;
}
