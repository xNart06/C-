#include <stdio.h>

int main() {

	int a,b;

	 while(1){
	for(a=0;a<=2;a++) {


		for(b=1;b<=17;b++) {

			if((b>=3 - a && b<=6 + a) || (b>=12 - a && b <= 15 + a)){

					printf(".");
		}

			else {

			printf(" ");

			}

	}

	printf("\n");

	}

	for(a=0;a<9;a++) {

		for(b=1;b<=17;b++) {

			if(b>=a + 1 && b<=17 - a){

			printf(".");
	}

		else{

		printf(" ");

		}

		}

	printf("\n");

	}
	 }

	 return 0;
}
