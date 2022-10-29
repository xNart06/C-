//HATALI KOD YANLIS YAZDIN
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *dosya;
    char kr;
    int say;
    printf("aranacak karakter");
    scanf("%c",&kr);

    dosya=fopen("d:\\a.txt","r");
    if (dosya==NULL)
    {
        puts("dosya acilamadi");
        getch();
        exit(0);
    }else{
while (!feof(dosya))
{
    if(kr==fgetc(dosya))
    say++;
}
if(say>0)
    printf("%dadet var",say);
else
    printf("karakter yok");
    fclose(dosya);
    }
    
    return 0;
}