#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *dosya;
    char deger[80];
    dosya=fopen("d:\\a.txt","r");
    if(dosya==NULL){
        puts("dosya acilamadi");
        getch();
        exit(0);
    }else{
        fgets(deger,80,dosya);
        printf("okunan: %s",deger);
        fclose(dosya);
    }
    return 0;
}