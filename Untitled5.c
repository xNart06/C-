#include<stdio.h>

int main(){

//klavyeden girilen 10 tane sayýndan en büyük olaný yaz,,
    int sayi, sayac=0;

    do{
        printf("Sayiyi giriniz: "); scanf("%d",&sayi);
        if(sayi>0){
         sayac++;
        }
        else{
        printf("\npozitif sayi giriniz\n");
        }
    }while(sayac<10);

    return 0;
}
