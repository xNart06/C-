#include<stdio.h>

int main(){

//klavyeden girilen 10 tane say�ndan en b�y�k olan� yaz,,
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
