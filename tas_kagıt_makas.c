#include <stdio.h>
#include <time.h>
int main()
{

    srand(time(NULL));
    int a,b;
    a = rand()%10 + 1;

    printf("%d", a );
    printf("tahmin ettiginiz sayiyi giriniz"); scanf("%d",&b);

	while (a!=b){
	
        if(a>b)
        {
            printf("sayiyi yukseltin"); scanf("%d",&b);

        }
        else
        {
            printf("sayiyi kucultun"); scanf("%d",&b);


        }
		}


    printf("dogru tahmin ettiniz");
    return 0;
}
