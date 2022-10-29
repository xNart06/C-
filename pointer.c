#include<stdio.h>
#include<conio.h>

int main(){
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",*p); // p'nin gösteridiği yeri yazar
    printf("%d\n",p); // p'nin gösterdiği yeri adresi yazar
    printf("%d\n",a);// a'nın değerini basar
    printf("%d\n",&a);// a'nın adresini basar
    printf("%d\n",&p);// p'nin adresini basar
    return 0;
}