#include "stdio.h"
#include "math.h"

void nhapMang(int x[], int &n) {
	do {
		printf("Nhap vao so luong phan tu cua mang :");
		scanf("%d", &n);
	} while(n <0 || n > 100);
	for(int i =0; i<n; i++) {
		printf("x[%d] =", i);
		scanf("%d", &x[i]);
	}
}
void xuat(int x[], int n){
	for(int i=0; i<n;i++){
		printf("\n%d", x[i]);
	}
}
void taoMang(int x[], int n , int y[], int k ){
	for(int i =0;i<n;i++){
		y[i] = abs(k-x[i]);
	}
}
int timMaxy (int y[], int n ){
	int max = y[0];
	for(int i =0;i<n;i++){
		if(y[i] > y[0]){
			max = y[i];
		}
	}
	return max ;
}
int timMiny(int y[],int n){
	int min = y[0];
	for(int i =0;i<n;i++){
		if(y[i] < y[0]){
			min = y[i];
		}
	}
	return min;
}
void xuatKetQua_1 (int x[], int y[], int n){
	printf("\nGia tri trong mang xa gia tri k nhat la :");
	int Max = timMaxy(y,n);
	for(int i =0;i<n;i++){
		if(y[i] == Max ){
			printf("%d", x[i]);
		}
	}
}
void xuatKetQua_2 (int x[], int y[], int n){
	printf("\nGia tri trong mang gan gia tri k nhat la :");
	int Min = timMiny(y,n);
	for(int i =0;i<n;i++){
		if(y[i] == Min ){
			printf("%d", x[i]);
		}
	}
}
int main() {
	int a[100];
	int b[100];
	int n ;
	nhapMang(a,n);
	int k ;
	printf("Nhap vao gia tri cua k :");
	scanf("%d", &k);
	taoMang(a,n,b,k);
	printf("\nKhoang cach tu k = %d den cac phan tu trong mang la :", k);
	xuat(b,n);
	xuatKetQua_1(a,b,n);
	xuatKetQua_2(a,b,n);
	return 0;
	
	

}





























