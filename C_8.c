#include<stdio.h>

int main(){

char sonuc;
int sayi1, sayi2;

printf("\nislem:\n");scanf("%s",&sonuc);

sayi1=10;
sayi2=5;


        switch(sonuc){

       case '+':
        sonuc=sayi1+sayi2;
        printf("%d",sonuc);
        break;

        case '-':
        sonuc=sayi1-sayi2;
        printf("%d",sonuc);
        break;

        case '/':
        sonuc=sayi1/sayi2;
        printf("%d",sonuc);
        break;

        case '*':
        sonuc=sayi1*sayi2;
        printf("%d",sonuc);
        break;

        default:
        printf("Bilinmeyen iþlem");
        break;

           }




return 0;
}
