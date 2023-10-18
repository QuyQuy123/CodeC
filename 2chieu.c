#include <stdio.h>

void nhapMang(int a[100], int *m) {
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",m);
	for(int i=0; i<*m; i++) {
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[100], int m) {
	for(int i=0; i<m; i++) {
		printf("%d ",a[i]);
	}
}
void swap(int a[100], int m) {
	for(int i=0; i<m; i++) {
		for(int j=i+1; j<m; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void chenMang(int a[100], int *m,int *k) {
	printf("\nNhap vao gia tri can chen:");
	scanf("%d",k);
	for(int i=*m;i>0;i--){
		a[i] = a[i-1];
	}
	a[0] = *k;
	(*m)++;

}
int main() {
	int a[100];
	int m,k;
	nhapMang(a,&m);
	printf("\nGia tri mang vua nhap:");
	xuatMang(a,m);
	chenMang(a,&m,&k);
	printf("\nMang moi:");
	xuatMang(a,m); 



	return 0;
}









