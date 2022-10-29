#include<stdio.h>
#include<stdlib.h>
int main(){
    /*dosya içine yazılan ifade*/char kr = 'a';
    FILE *dosya;
    
    /*dosya oluşturma*/dosya = fopen("d:\\a.txt","w");

    //açılıp açılmadığını kntrol etme
    if(dosya==NULL){
        puts("Dosya acilmadi");
        getch();
        exit(0);    
    }else{
        puts("acildi");
    }
    /*kr değişkeninin içini dosya klasörüne aktar*/fputc(kr,dosya);
    /*dosya kapatma*/fclose(dosya);
    getch();
    return 0;
}