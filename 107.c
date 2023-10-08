#include "stdio.h"
void nhap(int *a){// a= &b 
	scanf("%d",a);
}

int main(){
	int a ;
	printf("Nhap vao gia tri cua a:");
	nhap(&a);
	printf("\nGia tri cua a la: %d",a);
}