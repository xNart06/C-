#include<stdio.h>

int main(){
	
	//��gen �evre ve alan hesab�
	int kenar1, kenar2, kenar3, taban, yukseklik, alan, cevre;
	
	
	printf("1. Kenari giriniz: ", kenar1); 
	scanf("%d",&kenar1);
	
	printf("2. Kenari giriniz: ", kenar2); 
	scanf("%d",&kenar2);
	
	printf("3. Kenar� giriniz: ", kenar3); 
	scanf("%d",&kenar3);
	
	printf("Yuksekligi giriniz: ", yukseklik); 
	scanf("%d",&yukseklik);
	
	printf("Taban uzunlugu giriniz: ", taban); 
	scanf("%d",&taban);
	
	alan=(taban*yukseklik)/2;
	
	cevre=kenar1+kenar2+kenar3;
	
	printf("Alan= %d - cevre= %d",alan,cevre);
	
	
	return 0;
}
