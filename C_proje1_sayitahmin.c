#include <stdio.h>
#include <stdlib.h>
#include <time.h> //program�n her defas�nda farkl� say� �retebilmesi i�in yazaca��m�z fonksiyonda i�levi olan ibarenin k�t�phanesi
#include <locale.h>

int main(){
        srand(time(NULL));
		//bu komut C dilinde rastgele say� �retirken her seferinde farkl� say� �retmemizi sa�lar
		setlocale(LC_ALL, "Turkish");

	int user_num, comp_num, a=1;

        comp_num = rand() % 10 + 1; // 1 ile 10 aras� rastgele say� �retecek



while(a==1){
            printf("\n\n1-10 aras� bir say� giriniz: ", user_num); scanf("%d", &user_num); //kullan�c�dan veri al

if(user_num<=100 && user_num>=1){
        	if(user_num==comp_num){
        		printf("Bilgisayar�n �retti�i say�: %d",comp_num);
        		printf(" ====> TEBR�KLER!! Do�ru bildiniz"); a=0;
			}
			else{
				printf("Bilgisayar�n �retti�i say�: %d",comp_num);
				printf(" ====> !!B�LEMED�N�Z!!  TEKRAR DENEY�N");

                //E�er say�y� do�ru tahmin edemezsek program tekrar sorsun
			}
			//E�er say� 1-10 aras�nda ise komutlar� yap
		}

        }

	return 0;
}
