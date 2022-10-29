#include<stdio.h>
#include<stdlib.h>

//struct olusturuyoruz
//kurulan dugumlerin(node) bir sonraki adresini gosterecek olan struct
struct n{
    int x;
    struct n * next; //struct n seklinde yazilmak zorunda yoksa derleyici hata veriyor
};

//anlasilmayi kolaylastirmak adina n i node olarak tan�t�yoruz

typedef struct n node;

int main(){
    //dugum yapiyoruz
    node *root;//baslangic adresini tutacak
    //hafizada olusturulan ilk kutuyu root gosteriyor
    root = (node*)malloc(sizeof(node));//bir tane node un hafizada kapladigi kadar yeri ayirdik
    root -> x=10; //rootun gosterdigi ilk dugumun icerigi
    root -> next = (node*)malloc(sizeof(node));//yeni yer ayirdik
    root -> next -> x=20; //yeni olusan dugumun degeri
    root -> next -> next = (node*)malloc(sizeof(node));
    root -> next -> next -> x=30;
    root -> next -> next -> next = NULL; //Son elemani null a esitliyoruz. Boylece bagli listemiz bitmis oluyor
    //Yukardaki islem sadece next kullanarak yapilabilir. Fakat her seferinde next yazmak isi zorlastirir
    //Bu yuzden iter kullan�yoruz. Iter root ile ayn� baslangic degerini gosterir fakat liste
    //Uzerinde istedigi gibi takilabilir

    node *iter;
    iter = root;
    printf("%d",iter->x);//iterin gosterdigi x degerini basacak yani 10
    //ilerlemek icin ise
    iter = iter ->next;
    printf("%d",iter->x);//nextindeki degeri verir
    
    /*buraya kadar olan kod onceki ile ayni. Tek fark en son next i NULL a esitliyoruz*/
    iter = root; // basa donduk   
    int i = 0;
    //iter degeri null gorene kadar devam edecek
    while(iter != NULL){
        i++;
        printf("\n%d.eleman= %d",i,iter->x);
        iter = iter -> next;
        }

}
