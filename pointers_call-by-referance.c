#include <stdio.h>
#include <stdlib.h>


int main()
{
	char *p1, *p2;
	int i;
	char dizi[]="abcdefghij";
	
	p1=(char *)malloc(sizeof(char) * 10);
	
	if(p1==NULL)
	{
		printf("yer ayr�lmad�");
	}
	else
	{
		p2=p1;
		for(i=0;i<10;i++)
		{
			*p2++ = dizi[i];			
		}
		
		for(i=0;i<10;i++)
		{
			printf("%c \t", dizi[i]);
		}
		/*
	
		for(i=0;i<10;i++)
		{
			*(p1+i) = dizi[i];	
			printf("%c \t", *(p1+i));
		}
	*/
		
		
		//free(p1);
	}
	
	
	
	
	
	return 0;
}
