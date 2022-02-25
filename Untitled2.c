#include<stdio.h>
int main(){

int sayi1, sayi2, obeb, okek, i, j;

printf("sayi1 giriniz: "); scanf("%d",&sayi1);
printf("sayi2 giriniz: "); scanf("%d",&sayi2);
//obeb
if(sayi1>sayi2){
for(i=2;i<=sayi2;i++){
    if(sayi1%i==00 && sayi2%i==0){
        printf("Obeb: %d \n",i);
    }

}
}
else{
for(i=2;i<=sayi1;i++){
    if(sayi1%i==00 && sayi2%i==0){
        printf("Obeb: %d \n",i);
    }

}
}


return 0;
}
