#include<stdio.h>


int main(){

int a=10;

int *ptr=&a;

int **ptr2=&ptr;

printf("a: %d ptr: %p ptr2: %p",a,ptr,ptr2);

return 0;
}
