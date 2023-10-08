#include "stdio.h"

void nhapMang(int x[], int &n) {
	
	printf("Nhap vao so luong phan tu cua mang :");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		printf("\nx[%d] =",i);// x[0] = 10 , x[1] =50 
		scanf("%d",&x[i]);
	}

}
void xuatMang(int x[],int n ) {
	printf("\nGia tri cua mang la :");
	
	for(int i=0; i<n; i++) {
		printf("%d ",x[i]);
	}
}
void sum(int x[], int n){
	printf("Tong cua mang la:");
	int tong =0;
	for(int i=0;i<n;i++){
		tong = tong +x[i];
	}
	printf("%d",tong);
}

int main() {
	
	int a[100],n;
	
	nhapMang(a,n);
	xuatMang(a,n);
	sum(a,n);
}