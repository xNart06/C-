#include<stdio.h>
#include<stdlib.h>
#define BOYUT 5
//FIFO = First In First Out
int kuyruk[BOYUT], front = -1, rear = -1;//on ve arka degerlerini sabit -1 sayisina esitledik


void enQueue(int veri){
    if(rear == BOYUT){ //eger son eleman boyuta esitse hata verecek
        printf("OVERFLOW HATASI!!!");
    }else{
        if(front == -1){
            front = 0; //eger kuyruga hic eleman eklememisse ekliyoruz
        }
    rear = rear + 1; //en arka bir ilerler
    kuyruk[rear] = veri;
    }
}

void deQueue(){
    if(front == -1 || front > rear){
        printf("Kuyruk bos...");
        front = -1;
        rear = -1;
    }else{
        front = front + 1; //frontu 1 kaydir
    }
}

void display(){
    int i;
    for(i=front; i<=rear; i++){
        printf("%d ",kuyruk[i]);
    }
}

int main(){
    int secim;

    while(1){ 
    printf("\n[1] enQueue");
    printf("\n[2] deQueue");
    printf("\nYapmak istediginiz islem..."); scanf("%d",&secim); 
    
        switch(secim){
            case 1:
                printf("Veri girin"); scanf("%d",&secim);
                enQueue(secim);
                display();
            break;

            case 2:
                deQueue();
                display();
            break;
        }
    }
    return 0;
}