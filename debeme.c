#include <stdio.h>
#include <stdlib.h>
void sirala(int *dizi_deger,int kac_elemanli)
{
     int i,j,tasi;
    for(i=0;(kac_elemanli-1)>i;i++ )
    {
      for(j=i+1;kac_elemanli>j;j++){
         if(*(dizi_deger+i) >*(dizi_deger+j))
         {
                 tasi=*(dizi_deger+i);
                 *(dizi_deger+i)= *(dizi_deger+j);
                 *(dizi_deger+j)=tasi;          
         }                        
                                 
         }
      }
   
   
   
}
int main(int argc, char *argv[])
{
  int n=0,i;
  printf("Dizi kac elemanli olsun:");
  scanf("%d",&n);
  int dizi[n];
  for(i=0;n>i;i++)
  {
     printf("%d.eleman:",i+1);
     scanf("%d",&dizi[i]);          
  }
  sirala(dizi,n);
  for(i=0;n>i;i++)
  {
     printf("%d\n",dizi[i]);          
  }
  system("PAUSE"); 
  return 0;
}