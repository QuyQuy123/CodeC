#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
	int i;

	// Sao chép các phần tử của mảng thứ nhất vào mảng kết quả
	for (i = 0; i < n1; i++) {
		merged[i] = arr1[i];
	}

	// Sao chép các phần tử của mảng thứ hai vào mảng kết quả
	for (int j = 0; j < n2; j++) {
		merged[i] = arr2[j];
		i++;
	}
}

void swap(int &a, int &b) {
	int tam =a ;
	a=b;
	b=tam;
}

void sapxep(int x[100],int n ) {
	for(int i=0; i<n; i++) {
		int vitrimin =i;
		for(int j=i+1; j<n; j++) {
			if(x[j]<x[vitrimin])
				vitrimin =j;
		}
		swap(x[vitrimin],x[i]);
	}
}
void printMang(int x[], int n ) {
	for(int i=0; i<n; i++) {
		printf("%d ",x[i]);
	}
}


int main() {
	int arr1[100], arr2[100];
	int n1, n2;

	// Nhập số lượng phần tử và các phần tử của mảng thứ nhất từ bàn phím
	printf("Nhap vao so luong phan tu cua mang thu nhat : ");
	scanf("%d", &n1);

	printf("Nhap vao cac phan tu cua mang thu nhat:\n");
	for (int i = 0; i < n1; i++) {
		printf("\narr1[%d]=",i);
		scanf("%d", &arr1[i]);
	}

	// Nhập số lượng phần tử và các phần tử của mảng thứ hai từ bàn phím
	printf("Nhap vao so luong phan tu cua mang thu hai: ");
	scanf("%d", &n2);

	printf("Nhap vao cac phan tu cua mang thu hai\n");
	for (int i = 0; i < n2; i++) {
		printf("\narr2[%d]=",i);
		scanf("%d", &arr2[i]);
	}

	int merged[n1 + n2];

	mergeArrays(arr1, n1, arr2, n2, merged);

	printf("Mang sau khi gop la : ");
	for (int i = 0; i < n1 + n2; i++) {
		printf("%d ", merged[i]);
	}

	sapxep(merged, n1+n2);
	printf("\nmang sau khi duoc sap xep la :");
	printMang(merged, n1+n2);
}
