//dosya i�inde arama yapma

#include <stdio.h>
int main()
{
	FILE *dosya;
	char kr;
	int say=0;
	printf("aranilack karakteri giriniz: ");
	scanf("%c",&kr);
	
	dosya=fopen("D:\\piremses.txt","r");
	if(dosya==NULL)
	{
		puts("dosya a��lmad�");
	}	
	else 
	{
		
		while(!feof(dosya))
		{
			if(kr==fgetc(dosya))
				say++;			
		}		
		if(say>0)
			printf("%c karakterinden %d adet bulunmu�tur.", kr, say);
		else
			printf("Karakter bulunamam��t�r");
		fclose(dosya);
	}
	return 0;
}
