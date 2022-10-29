#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;
    scanf("%d",&a);

    int *p=(int*)malloc(sizeof(int)*a);

    int dizi[a];

    printf("%d",a);
}