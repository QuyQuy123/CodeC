#include "stdio.h"

int a[100];
int n;
int x;

void nhapMang(int x[100], int &n){
	printf("nhap vao so luong phan tu cua mang :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nnhap x[%d] = ",i);
		scanf("%d",&x[i]);
	}
}

void xuatMang(int x[100], int n){
	printf("gia tri cua mang la :");
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}
int timKiem(int x[100], int n , int tk){
	
	for(int i=0;i<n;i++){
		if(x[i]==tk)
		
			return 1 ;
	}
	return 0;
}
void thucHienTimkiem(int x[100], int n ){
	int tk;
	printf("nhap vao gia tri can tim :");
	scanf("%d",&tk);
	int kq = timKiem(x,n,tk);
	if(kq ==0){
		printf("\n KhongTim thay !");
	}else{
		printf("\n tim thay !");
	}
}

int main(){
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\n");
	thucHienTimkiem(a,n);	
}