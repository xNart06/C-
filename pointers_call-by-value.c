#include<stdio.h>

void degerdegis(int a,int b){

int gecici=a;

a=b;

b=gecici;
printf("a:%d b:%d",a,b);
}

int main(){

    int x=5,y=10;

    degerdegis(x,y);

    printf("\nx:%d y:%d",x,y);
    return 0;
}