#include<stdio.h>
#include<stdlib.h>
#define Boyut 5 //boyut 5 tanimlandi
//push() = ekleme
//pop() = cikarma
//peek() = en bastaki degeri dondurme

int dizi[Boyut], top; //top main icinde -1 olarak tanimlandi

void push(int veri){
    if(top+1 == Boyut){ // top -1 oldugu icin 1 arttirdik ve bu deger boyuta esitse stack dolu hatasi verecek
        printf("stack dolu");
    }else{
        top = top + 1; 
        dizi[top] = veri; //degilse her seferinde index numarasini 1 arttiracak ve dizideki ilgili alana bu yazacak
    }
}

void pop(){
    if(top == -1){ //stack ilk degeri olan -1 e esitse yani bossa bu stacgin bos oldugu anlamina gelir
        printf("stack zaten bos");
    }else{
        top = top-1; //eger degilse son eklenen degeri stackten siler
    }
}

int peek(){
    return dizi[top]; //son elemani gormek icin diziyi geri donduruyoruz
}

void yazdir(){
    int i;
    for(i=0;i<top+1;i++){
        printf("%d ", dizi[i]);
    }
    printf("==>Top"); 
}

int main(){
    top = -1;
    int secim;

    while(1){
        printf("[1] Push\n");
        printf("[2] Pop\n");
        printf("[3] Peek\n");
        printf("secim giriniz...\n"); scanf("%d",&secim);

        switch (secim)
        {
            case 1:
                printf("sayi giriniz"); scanf("%d",&secim);
                push(secim);
                yazdir();
                break;
            case 2:
                pop();
                yazdir();
                break;
            case 3:
                printf("\n Bagli listenin top pozisyonundaki elemani = %d", peek());
                break;
        }
    }
    return 0;
}