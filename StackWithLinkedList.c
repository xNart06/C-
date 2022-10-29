#include<stdio.h>
#include<stdlib.h>
//normal bagli listeden farkli olarak next yerine prev degerini sonraki dugum olarak gostermemiz gerekiyor
//cunku stack yapisini bir bardak olarak dusunursek her seferinde ustteki elemani gosterecek
//FILO = First In Last Out

struct node
{
    int data;
    struct node *next; 
};

struct node *top = NULL;

void push(int veri){
    struct node *eklenecek = (struct node*)malloc(sizeof(struct node)); //dugum olusturduk
    eklenecek->data = veri; //datasi disardan gelecek
    eklenecek->next = NULL; //sonraki eleman null
    if(top != NULL){
        eklenecek->next = top; 
    }
    top = eklenecek;
}

void pop(){
    if(top->data == NULL){
        printf("Stack zaten bos!");
    }else{
        struct node *temp;
        temp = top;
        top = top->next;
        free(temp);
    }
}

int peek(){
    return top->data;
}

void yazdir(){
    struct node* q;
    q = top;
    printf("\n");
    while(q!=NULL){
        printf(" %d =>", q->data);
        q = q->next;
    }
    printf("NULL");
}

int main(){
    int secim;
    while (1)
    {
        printf("\n[1]Push");
        printf("\n[2]Pop");
        printf("\n[3]Peek");
        printf("\nislem seciniz...");
        scanf("%d",&secim);

        switch (secim)
        {
        case 1:
            printf("sayi giriniz.."); scanf("%d",&secim);
            push(secim);
            yazdir();
            break;

        case 2:
            pop();
            yazdir();
            break;
        
        case 3:
            printf("top elemani => %d",peek());
            break;
        
        }

    }
    return 0;
}
