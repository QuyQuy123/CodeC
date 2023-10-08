#include "stdio.h"


void nhap_Mang(int a[], int &n) {
	printf("Nhap vao so luong phan tu cua mang a:");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		printf("\na[%d]= ",i);
		scanf("\n%d",&a[i]);
	}
}
void xuat_Mang(int a[], int n) {

	printf("Gia tri cua mang vua nhap la :");
	for(int i=0; i<n; i++) {
		printf("\n%d",a[i]);
	}
}
void swap (int *a , int *b){
	int temp = *a ;
	*a=*b;
	*b=temp;
}
void sapXepTang( int x[], int n){
	for(int i=0;i<n;i++){
		int vitrimin =i;
		for(int j=i+1;j<n;j++){
			if(x[j]<x[vitrimin])
				vitrimin = j;
		}
		swap(&x[vitrimin],&x[i]);
	}
}
void tong_Max(int a[], int n){
	int tong =0;
	for(int i=1;i<n;i++){
		tong = tong +a[i];
	}
	printf("\nTong max la:%d ",tong);
}
void tong_Min(int a[], int n){
	int tong =0;
	for(int i=0;i<n-1;i++){
		tong = tong +a[i];
	}
	printf("\nTong min la:%d ",tong);
}

int main() {
	int a[100];
	int n;
	nhap_Mang(a,n);
	
	sapXepTang(a,n);
	xuat_Mang(a,n);
	tong_Min(a,n);
	tong_Max(a,n);
}











