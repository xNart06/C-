#include<stdio.h>
int main(){

int sayi, i;

printf("sayi giriniz:"); scanf("%d",&sayi);

for(i=2;i<=sayi;i++){
    if(sayi%i==0){
        printf(" %d ",i);
    }
}



return 0;
}
