#include "stdio.h"
#include "limits.h"

int a[100];
int n ;

void nhapMang(int x[100],int &n){
	printf("nhap vao so luong phan tu cua mang :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nx[%d]=",i);
		scanf("%d",&x[i]);
	}
}

void xuatMang(int x[100],int n){
	printf("gia tri cua mang la :");
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}
void xoaMangTaiViTri(int x[100],int &n, int vi_tri){
	for(int i=vi_tri;i<n-1;i++){
		x[i]=x[i+1];
	}
	n--;
}

void xoaMangTheoGiaTri(int x[100], int &n){
	int gt;
	printf("nhap vao gia tri can xoa:");
	scanf("%d",&gt);
	for(int i=0;i<n;i++){
		if(x[i]==gt)
			xoaMangTaiViTri(x,n,i);
	}
}

int main(){
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\n");
	xoaMangTheoGiaTri(a,n);
	xuatMang(a,n);		
}