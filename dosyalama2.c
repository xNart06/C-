#include<stdio.h>
#include<stdlib.h>
int main(){
    char kr;
    FILE *dosya;
    dosya=fopen("d:\\a.txt","r");
    if(dosya==NULL){
        puts("dosya yok");
        getch();
        exit(0);
    }
    kr = fgetc(dosya);
    printf("%c",kr);
    fclose(dosya);
    return 0;
}