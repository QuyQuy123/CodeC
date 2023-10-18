#include <stdio.h>

void nhapMang(int a[100], int *n) {
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",n);
	for(int i=0; i<*n; i++) {
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}

}
void xuatMang(int a[100], int n) {
	for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
}
void sapXepTang(int a[100], int n) {
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
}
int timkiem(int a[100], int n, int *k) {
	printf("Nhap vao gia tri cua so can tim: k =");
	scanf("%d",k);
	int index =0;
	for(int i=0; i<n; i++) {
		if(a[i] == *k) {
			index =1;
		}
	}
	return index;
}
void chenDau(int a[100], int *n, int *k) {
	printf("Nhap vao gia tri can chen vao dau: k=");
	scanf("%d",k);
	for(int i=*n; i>0; i--) {
		a[i] = a[i-1];
	}
	a[0] = *k;
	(*n)++;
}
void chenCuoi(int a[100], int *n, int *k) {
	printf("Nhap vao gia tri can chen vao cuoi: k=");
	scanf("%d",k);
	a[*n] =*k;
	(*n)++;
}
void xoa(int a[100], int *n, int *k) {
	printf("Nhap vao so can xoa:");
	scanf("%d",k);
	for(int i=0; i<*n; i++) {
		if(a[i] == *k) {
			for(int j=i;j<*n-1;j++){
				a[j] = a[j+1];
			}
			(*n)--;
			
		}
	}
}

int main() {
	int a[100];
	int n,k;
	nhapMang(a,&n);
	printf("\nGia tri cua mang vua nhap:\n");
	xuatMang(a,n);
	printf("\n-------------\n");
	printf("Sap xep mang tang dan:\n");
	sapXepTang(a,n);
	printf("\n");
	printf("-----------------\n");
	int search = timkiem(a,n,&k);
	if(search ==1) {
		printf("\nTim thay gia tri cua so can tim trong mang!");
	} else {
		printf("\nkhong tim thay gia tri cua so can tim!");
	}
	printf("\n---------------\n");
	chenDau(a,&n,&k);
	printf("\nMang moi:\n");
	xuatMang(a,n);
	printf("\n-------------------\n");
	chenCuoi(a,&n,&k);
	printf("\nMang moi:\n");
	xuatMang(a,n);
	printf("\n-----------------\n");
	printf("\nMang moi sau khi xoa:\n");
	xoa(a,&n,&k);
	xuatMang(a,n);

	return 0;

}
















