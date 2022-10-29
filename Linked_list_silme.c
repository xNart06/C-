#include<stdio.h>
#include<stdlib.h>

//bagli liste yapisi
struct n
{
    int x;
    struct n *next;
};

//n node olarak degisti
typedef struct n node;

//ekrana bastirmak icin gerekli fonskiyon
void bastir(node *r){
    while (r!=NULL)//eger bagli liste sona gelmediyse ekrana basacak
    {
        printf("%d ",r->x);
        r=r->next; //r degerini sonraki degerin nextine esitleyecek
    }
    printf("\n");
}

void ekle(node *r, int x){
    while(r->next!=NULL){
        r = r->next; // r nin next i null degeri almadigi surece r ye next ata
    }
    r->next=(node*)malloc(sizeof(node));
    r->next->x = x;
    r->next->next = NULL;
}

node * sil(node *r, int x){ //silinecek dugume gelmeden onceki dugum silinecek olandan sonrakine aktarilir ve daha sonra silinecek olan dugum silinir
            //silmek icin free() kullancaz
            //ayrica silmek icin bastaki root degerini tutan root ve iterin yanina baska bir isaretci daha belirtmemiz gerekiyor
            //bastaki elemanin silinme ihtimaline karsilik void tanimlamadik
    node *temp; //adres tutacak temp olusturduk
    node *iter = r;
    
    while(iter->next!=NULL && iter->next->x!=x){
        iter = iter ->next;
    }
    if(iter->next==NULL){
        printf("sayi yok");
        return r;
    }
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);
    return r;
}


int main(){
    node *root; //baslangic degerini tut
    root =(node*)malloc(sizeof(node));
    root -> next = NULL; //dugum olusturduk
    root -> x = 500; //baslangic degeri 500
    int i = 0;
    for(i=0;i<5;i++){
        ekle(root, i*10);
    }
    bastir(root);

//araya eleman ekleme
    node *iter = root; //rootu iter e esitleyip yeni root(iter)'imizi yararttik
    for(i=0;i<3;i++){
        iter = iter->next;  //eklemek istedigim siraya eristim
    }
    node *temp = (node*)malloc(sizeof(node));//yer ayirma islemini temp adli degiskene atadim 
    temp->next = iter->next; //temp'in nextini iter'in nexti ile degistirdim
    iter -> next = temp; //iterin nextine yeni dugumu bagladim
    temp->x =100;   //yeni dugume deger atadim
    bastir(root);
    root = sil(root,30);
    bastir(root);
}

