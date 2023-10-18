#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	printf("Nhap so luong phan tu:");
	scanf("%d",&n);
	
	int *ptr = (int*)malloc(n*sizeof(int));
	if(ptr == NULL){
		printf("\nLoi khong cap phat duoc bo nho");
		return 0 ;
	}
	printf("\nNhap vao cac gia tri cua mang:");
	for(int i=0;i<n;i++){
		scanf("%d", ptr +i);
	}
	printf("\nCac gia tri vua nhap la:");
	for(int i=0;i<n;i++){
		printf("%d ", *(ptr +i));
	}
	free(ptr);
}


















