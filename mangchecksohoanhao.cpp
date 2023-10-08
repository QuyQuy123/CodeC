#include"stdio.h"
#include "math.h"

void nhapMang(int x[], int &n) { // nhập vào mảng
	printf("Nhap vao so luong phan tu cua mang :");
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		printf("\nx[%d] =", i);
		scanf("%d",&x[i]);
	}
}
void xuatMang(int x[], int n) { // xuất ra mảng
	printf("\nGia tri cua mang vua nhap la :");
	for(int i=0; i<n; i++) {
		printf("%d ", x[i]);
	}
}

int kiem_Tra(int n) {
	int tong =0;
	for(int i=1; i<n; i++) {
		if(n %i ==0) {
			tong += i;
		}
	}
	if(tong == n) {
		return 1 ;
	} else {
		return 0;
	}
}

int main() {
	int a[100];
	int n;
	nhapMang(a,n);
	xuatMang(a,n);
	int so_Hao_Hao = -1 ;
	for(int i=n-1; i>0; i--) {
		if(kiem_Tra(a[i]) == 1 ) {
			so_Hao_Hao = i;
			break;
		}
	}
	if(so_Hao_Hao != -1) {
		printf("\nVi tri cuoi cung co so hoan hao la : %d", so_Hao_Hao);
	} else {
		printf("\n-1");
	}


}














