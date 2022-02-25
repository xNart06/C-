#include <stdio.h>
#include <stdlib.h>
#include <time.h> //programýn her defasýnda farklý sayý üretebilmesi için yazacaðýmýz fonksiyonda iþlevi olan ibarenin kütüphanesi
#include <locale.h>

int main(){
        srand(time(NULL));
		//bu komut C dilinde rastgele sayý üretirken her seferinde farklý sayý üretmemizi saðlar
		setlocale(LC_ALL, "Turkish");

	int user_num, comp_num, a=1;

        comp_num = rand() % 10 + 1; // 1 ile 10 arasý rastgele sayý üretecek



while(a==1){
            printf("\n\n1-10 arasý bir sayý giriniz: ", user_num); scanf("%d", &user_num); //kullanýcýdan veri al

if(user_num<=100 && user_num>=1){
        	if(user_num==comp_num){
        		printf("Bilgisayarýn Ürettiði sayý: %d",comp_num);
        		printf(" ====> TEBRÝKLER!! Doðru bildiniz"); a=0;
			}
			else{
				printf("Bilgisayarýn Ürettiði sayý: %d",comp_num);
				printf(" ====> !!BÝLEMEDÝNÝZ!!  TEKRAR DENEYÝN");

                //Eðer sayýyý doðru tahmin edemezsek program tekrar sorsun
			}
			//Eðer sayý 1-10 arasýnda ise komutlarý yap
		}

        }

	return 0;
}
