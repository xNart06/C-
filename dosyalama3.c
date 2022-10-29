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
    }else{
    do
    {
        kr = fgetc(dosya);
        putchar(kr);    
    } while (kr!=EOF);
    
    printf("%c",kr);
    
    }
    fclose(dosya);
    return 0;
}