#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");

	int sayi,icBosluk,disBosluk;
 	int i;
 	int j;
 	char sembol;

 	while(1){

 printf("Bir sayi girin: ");  scanf("%d",&sayi);
 printf("\nSembol Giriniz: ");  scanf(" %c",&sembol);
    sayi = (sayi/2)+1;
			 icBosluk=-1;
			 disBosluk=sayi-1;

 for (i=1;i<=sayi;i++){

  	for(j=1;j<=disBosluk;j++)

		  printf(" ");
		  printf("%c",sembol);

		  if(i!=1){
		   	for(j=1;j<=icBosluk;j++)

		     printf(" ");
		 	 printf("%c",sembol);

  }
	 printf("\n");

	 icBosluk+=2;
	 disBosluk--;
 }

	 icBosluk-=4;
	 disBosluk=1;

 for( i=1;i<sayi;i++){

		  for(j=1;j<=disBosluk;j++)
		  printf(" ");
		  printf("%c",sembol);

 if(i!=sayi-1)
 {
	  for(j=1;j<=icBosluk;j++)

	    printf(" ");
	  printf("%c",sembol);

 }
  			printf("\n");

		 icBosluk-=2;
		 disBosluk++;
 }
 	}
return 0;

}
