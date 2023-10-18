#include <stdio.h>


void nhapMang(int a[100][100], int *m, int *n){
	printf("Nhap vao so dong va so cot cua mang:");
	scanf("%d %d",m,n);
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			printf("\na[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatMang(int a[100][100], int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void swap(int a[100][100], int m, int n){
	int k = m*n;
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(a[i/n][i%n] > a[j/n][j%n]){
				int temp = a[j/n][j%n];
				a[j/n][j%n] =a[i/n][i%n];
				a[i/n][i%n] = temp;
			}
		}
	}
}
int main(){
	int a[100][100];
	
	int m,n;
	nhapMang(a,&m,&n);
	printf("\nCac gia tri cua mang:\n");
	xuatMang(a,m,n);
	
	printf("\n--------------\n");
	printf("Gia tri cua mang tang dan:\n");
	swap(a,m,n);
	xuatMang(a,m,n);
	
	return 0;
}