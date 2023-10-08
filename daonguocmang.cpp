#include "stdio.h"

int a[100];
int n ;

// nhap mang
void nhapMang(int x[100], int &n){
	printf("nhap vao so luong phan tu cua mang :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nx[%d]= ",i);
		scanf("%d",&x[i]);
	}
}

// xuat mang vua nhap ra man hinh
void xuatMang(int x[100], int n){
	printf("gia tri cua mang la :");
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}
// xuat mang nguoc

void xuatMangNguoc(int x[100],int n){
	printf("\ngia tri cua mang nguoc la :");
	for(int i=n-1;i>=0;i--){
		printf("%d ",x[i]);
	}
	 
}

// dao nguoc mang

void daoNguocMang(int x[100], int n){
	for(int i=0;i<n/2;i++){
		int temp = x[i];
		x[i]=x[n-i-1];
		x[n-i-1]=temp;
	}
}

int main(){
	nhapMang(a,n);
	xuatMang(a,n);
	//xuatMangNguoc(a,n);
	daoNguocMang(a,n);
	printf("\n");
	xuatMang(a,n);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}