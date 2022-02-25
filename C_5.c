#include<stdio.h>

//1 den 20 ye kadar olan sayýlarý ekrana yazan ama 14'ü yazmayan gereksiz kodcuk
int main(){

    int i;
    i=0;
    while(i<20){
    i=i+2;
        if(i==14){
         printf(" \n");
                }
        else{
        printf("%d\n",i);

        }
    }
    return 0;
}
