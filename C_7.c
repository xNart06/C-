#include<stdio.h>

int main(){

char harf;
int c;

while(c==0){

        c=0;

        printf("\nHarf Giriniz: "); scanf("%s",&harf);

        switch(harf){

        case 'm': printf("Matematik"); break;
        case 'f': printf("Fizik"); break;
        case 'k': printf("Kimya"); break;
        case 'b': printf("Biyoloji"); break;
        case 't': printf("Tarih"); break;
        }
}

return 0;
}
