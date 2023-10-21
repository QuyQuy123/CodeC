#include <stdio.h>
void nhapMang(int a[100], int n) {
	for(int i=0; i<n; i++) {
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[100], int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int main() {
	int a [100];
	int n;
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatmang(a,n);


}