#include<stdio.h>

int main(){
    int a = 5,*ap;
    float b = 32.2,*bp;
    double c = 3.123,*cp;
    char d = 'a',*dp;

    int sayilar[5]={1,2,3,4,5};

    int *arrayp;

    ap=&a;
    bp=&b;
    cp=&c;
    dp=&d;
    
    arrayp=&sayilar[1];

    printf("%u adresindeki deger %d\n",ap,*ap);
    printf("%u adresindeki deger %f\n",bp,*bp);
    printf("%u adresindeki deger %lf\n",cp,*cp);
    printf("%u adresindeki deger %c\n",dp,*dp);
    printf("%u adresindeki deger %d\n",arrayp,*arrayp);
    return 0;
}