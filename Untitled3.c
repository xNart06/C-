#include<stdio.h>
int main(){
char giris;
int art, i;

printf("[A]1-50\n[B]1-100\n[C]1-150\n"); scanf(" %c",&giris);
if(giris=='a'){
    printf("Artýþ miktarý giriniz: "); scanf("%d",&art);
        for(i=1;i<=50;i+=art){
            printf(" %d ",i);
    }
}
    else if(giris=='b'){
    printf("Artýþ miktarý giriniz: "); scanf("%d",&art);
        for(i=1;i<=100;i+=art){
            printf(" %d ",i);
    }
    }
    else if(giris=='c'){
    printf("Artýþ miktarý giriniz: "); scanf("%d",&art);
        for(i=1;i<=150;i+=art){
            printf(" %d ",i);
    }
}
else{
        system("COLOR 4"); printf("HATALI GIRIS!\n");
        return main();
}
return 0;
}
