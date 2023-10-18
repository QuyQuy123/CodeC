// tim min/max trong mang 2 chieu:


#include <stdio.h>
void nhapMang(int a[100][100], int *m, int *n){
	printf("Nhap vao so dong va so cot cua m tran:");
	scanf("%d%d",m,n);
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			printf("\na[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatMang(int a[100][100], int m, int n){
	printf("\nGia tri cua mang vua nhap la:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int max(int a[100][100], int m, int n){
	int maxValue = a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j] >maxValue){
				maxValue = a[i][j];
			}
		}
	}
	return maxValue;
}
int min(int a[100][100], int m, int n){
	int minValue = a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j] < minValue){
				minValue = a[i][j];
			}
		}
	}
	return minValue;
}
int main(){
	int a[100][100];
	int m,n;
	nhapMang(a,&m,&n);
	xuatMang(a,m,n);
	//
	int resultmax = max(a,m,n);
	printf("\nGia tri lon nhat trong mang:%d",resultmax);
	//
	int resultmin = min(a,m,n);
	printf("\nGia tri nho nhat trong mang:%d",resultmin);
	return 0;
}













