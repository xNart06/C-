#include<stdio.h>
#include<stdlib.h>
#define Boyut 5 //boyut 5 tanimlandi
//push() = ekleme
//pop() = cikarma
//peek() = en bastaki degeri dondurme

int dizi[Boyut], top;

void push(int veri){
    if(top+1 == Boyut){
        printf("stack dolu");
    }else{
        top = top + 1;
        dizi[top] = veri;
    }
}

void pop(){
    if(top == -1){
        printf("stack zaten bos");
    }else{
        top = top-1;
    }
}

int peek(){
    return dizi[top];
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