#include<stdio.h>

int main(){

    int a,b,c,d,e,f;
    while(f==0){
            f=0;
    printf("1. iki sayiyi toplama\n");
    printf("2. iki sayiyi cikarma\n");
    printf("Islem No Seciniz: \n"); scanf("%d",&a);

		if(a!=1 && a!=2){
					system("COLOR 47");
					printf("HATA\a\n");
				}
		else{
	
    switch(a){
					
	    case 1:

        printf("1. sayi:\n"); scanf("%d",&b);
        printf("2. sayi:\n"); scanf("%d",&c);
        d=b+c;
        printf("Sonuc: %d\n\n",d);

         break;
    case 2:
        printf("1. sayi:\n"); scanf("%d",&b);
        printf("2. sayi:\n"); scanf("%d",&c);
        e=b-c;
        printf("Sonuc: %d\n\n",e);
         break;
}
}
    
    }


return 0;
}
