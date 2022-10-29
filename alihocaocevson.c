#include<stdio.h>
#include<stdlib.h>

typedef struct linked
{
    int x;
    struct linked *next;
}Node;

void bastir(Node * r){
    while(r!=NULL){
        printf("%d ",r->x);
        r=r->x;
    }
}

void ekle(Node *r, int x){
    while(r->next!=NULL){
        r = r->next;
    }
    r->next = (Node*)malloc(sizeof(Node));
    r->next->x = x;
    r->next->next = NULL; 
}

int main(){ 
    Node * root;
    root = (Node*)malloc(sizeof(Node));
    root->next=NULL;
    root->x =300;
    int i=0;
    for(i=0;i<5;i++){
        ekle(root,i*10);
    }
    bastir(root);

    return 0;
}