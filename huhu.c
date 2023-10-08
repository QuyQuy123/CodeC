#include "stdio.h"
#include "string.h"
#include "stdlib.h"



int main() {
	char st[4];
	int i=0, j =0;
	printf("Nhap vao ki tu:");
	for(i=0; i<4; i++) {
		st[i] = getchar();//c1
		//fflush(stdin);// c2
		getchar();
	}
	//sap xep
	int SIZE = strlen(st);
	for(i=0; i<SIZE-1; i++) {
		for(j=i+1; j<SIZE; j++) {
			if (st[i] > st[j]) {
				char temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
	printf("\nSau sap xep:");
	for(i=0; i<SIZE; i++) {
		printf("%c ",st[i]);
	}

}







