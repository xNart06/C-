#include<stdio.h>

int main(){

int sayi, i=2, j, deger;

printf("Bir sayi giriniz:  \n"); scanf("%d",&sayi);

while(i<sayi){
    deger=1;

        for(j=2;j<i;j++){

            if(i%j==0){
                deger=0;
                break;
            }
        }

    if(deger==1){
        printf("-->%d\n",i);
    }

    i++;
}

return 0;
}
