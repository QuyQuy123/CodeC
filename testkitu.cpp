#include "stdio.h"
#include "limits.h"
// tim phan tu nho thu 2 va lon thu 2 trong mang:
void nhapMang(int a[], int &n){
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[], int n){
	printf("\nCac gia tri cua mang vua nhap la:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
// tim max
int max(int a[], int n){
	int gtmax = a[0];
	for(int i=0;i<n;i++){
		if(a[i] > gtmax){
			gtmax = a[i];
			
		}
	}
	return gtmax;
}
int timsecondmin(int a[], int n){
	int min = INT_MAX;
	int min_2 = INT_MAX;
	for(int i=0;i<n;i++){
		if(a[i] <min){
			min = a[i];
		}	
	}
	for(int i=0;i<n;i++){
		if(a[i]== min){
			continue;
		}else{
			if(a[i] <min_2){
				min_2 = a[i];
			}
		}
	}
	return min_2;
}
int timsecondmax(int a[], int n){
	int max = INT_MIN;
	int max_2 = INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i] >max){
			max = a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i] == max){
			continue;
		}else{
			if(a[i] > max_2){
				max_2 = a[i];
			}
		}
	}
	return max_2;
}

int main(){
	int a[100];
	int n;
	nhapMang(a,n);
	xuatMang(a,n);
	int ketquamax= max(a,n);
	printf("\nGia tri lon nhat trong mang la:%d",ketquamax);
	int kq2 = timsecondmin(a,n);
	printf("\nGia tri nho thu 2 cua mang la:%d",kq2);
	
	int kqmax2 = timsecondmax(a,n);
	printf("\nGia tri lon thu 2 cua mang la:%d",kqmax2);
	
	
	
	return 0;
}
