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
}

void ekle(node *r, int x){
    while(r->next!=NULL){
        r = r->next; // r nin next i null degeri almadigi surece r ye next ata
    }
    r->next=(node*)malloc(sizeof(node));
    r->next->x = x;
    r->next->next = NULL;
}

int main(){
    node *root; //baslangic degerini tut
    //dugum olusturma baslangici 
    root =(node*)malloc(sizeof(node));//
    root -> next = NULL; 
    //dugum olusturma bitisi
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
}