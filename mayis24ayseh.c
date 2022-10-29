
    //siralama algoritmalari
    /*
    ---------------------BUBBLE SORT------------------------
#include<stdio.h>
#define size 6
int main()
{
    int dizi[size]={7,4,8,2,1,6}
    int i,j,gecici;

    for(i=0;i<size;i++)
        printf("%d \t",dizi[i]);
    
    for(i=0;i<size;i++){
        for(j=0;j<size-1;j++){
            if(dizi[j]>dizi[j+1]){
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }
    printf(\nsiralama\n);
    for(i=0;i<size;i++)
        printf("%d \t",dizi[i]);

        return 0;
}
    */
   
   
    /*
    ---------------------INSERTION SORT------------------------
#include<stdio.h>
#define size 6
int main()
{
    int dizi[size]={7,4,8,2,1,6}
    int i,j,gecici;

    for(i=0;i<size;i++)
        printf("%d \t",dizi[i]);

    for(i=0;i<size;i++){
        gecici=dizi[i];
        j=j-1;
        while(gecici<dizi[i-1]&&j>=0){
            dizi[i]=dizi[i-1];
            i=i-1;
        }
    dizi[i]=gecici;
    }
    printf(\nsiralama\n);
    for(i=0;i<size;i++)
        printf("%d \t",dizi[i]);


        return 0;
}

---------------------SELECTION SORT------------------------
#include<stdio.h>
#define size 6
int main()
{
    int dizi[size]={7,4,8,2,1,6}
    int i,j,gecici;

    for(i=0;i<size;i++)
        printf("%d \t",dizi[i]);

        return 0;
}
    */



