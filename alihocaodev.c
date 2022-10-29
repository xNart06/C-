#include<stdio.h>
#include<stdlib.h>

typedef struct ogr{

    char ad[20];
    char soyad[20];
    int numara;

}ogrenci;

int main(){

    struct ogr *kisi;

    int i,x,y,temp,j;
    printf("Kisi sayisi \n");
    scanf("%d",&x);

    kisi=(ogrenci*)malloc(sizeof(ogrenci)*x); //bellekte kisi sayisi kadar yer ayırdık

    for(i=0;i<x;i++){//verileri aldık
        printf("%d. Ogrencinin adini \n",i+1);
        scanf("%s",&(kisi+i)->ad);
        printf("%d. Ogrencinin soyadini \n",i+1);
        scanf("%s",&(kisi+i)->soyad);
        printf("%d. Ogrencinin numarasini \n",i+1);
        scanf("%d",&(kisi+i)->numara);
    }
    for(i=0; i<x; i++)
        printf("%p   Ad: %s\tSoyad: %s\tNumara: %d\n",&kisi+i,(kisi+i)->ad,(kisi+i)->soyad,(kisi+i)->numara);
    
    void bul(){//aynı soyaddaki kisiyi bulduk
        char soy;
        printf("aramak istediginiz soyadi girin\n");
        scanf("%s",&soy);
        for(i=0;i<x;i++){
            if(soy==*(kisi+i)->soyad){
                printf("%p   Ad: %s\tSoyad: %s\tNumara: %d\n",&kisi+i,(kisi+i)->ad,(kisi+i)->soyad,(kisi+i)->numara);
            }else{
                ((kisi+i)->soyad)+1;
            }
        
    }

    
    int sec;
    printf("\n[1]SOYAD BUL\n[2]CIKIS\nSecim: ");//kuallanıcıya kullanabilecegi fonks sunduk
    scanf("%d",&sec);

    if(sec==1){
        bul();
    }else if(sec==2){
        exit(0);
    }else{
        printf("HATA");
    }



    return 0;

}