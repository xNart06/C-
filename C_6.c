#include<stdio.h>

int main(){

system("COLOR 27");

int sayi,c;

c=0;

while (c==0){
printf("\nAy numarasi giriniz: "); scanf("%d",&sayi);

    if(sayi<1 || sayi>12){
            system("COLOR 4B");
            printf("HATA!!\a");
    }
    else{
        system("COLOR 27");
switch(sayi){

case 1: printf("Ocak"); break;
case 2: printf("Subat"); break;
case 3: printf("Mart"); break;
case 4: printf("Nisan"); break;
case 5: printf("Mayýs"); break;
case 6: printf("Haziran"); break;
case 7: printf("Temmuz"); break;
case 8: printf("Aðustos"); break;
case 9: printf("Eylül"); break;
case 10: printf("Ekim"); break;
case 11: printf("Kasým"); break;
case 12: printf("Aralýk"); break;
}}
}

return 0;
}
