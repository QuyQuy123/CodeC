// tinh tong cac phan tu trong mang 1 chieu --> co sử dụng hàm


#include "stdio.h"

void nhapMang(int a[100], int *n){ // *n =&a n =&a kí hiệu khai báo mảng a[100] , n là số lượng phần tử
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",n);
	for(int i=0;i<*n;i++){ // *n =*&a = a -->n
		printf("\na[%d]=",i);// a[0] = , a[1] = , a[2] = .......
		scanf("%d",&a[i]);
	}	
}
void xuatMang(int a[100], int n){
	printf("\nCac gia tri cua mang:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void sum(int a[100], int n){
	int tong = 0;
	for(int i=0;i<n;i++){
		tong = tong +a[i];
	}
	printf("%d",tong); 
}
int main(){
	int a[100];
	int n;
	nhapMang(a,&n);
	xuatMang(a,n);
	
	printf("\nTong la:");
	sum(a,n);
	
	
	
}
















