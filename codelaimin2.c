#include "stdio.h"
#include "limits.h"

void nhapMang(int a[], int *n){
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("\na[%d] =",i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int max2(int a[], int n){
	int MAX = INT_MIN;
	int MAX_2 = INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i] >MAX){
			MAX = a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i] ==MAX){
			continue;
		}else{
			if(a[i] >MAX_2){
				MAX_2 = a[i];
			}
		}
	}
	return MAX_2;
}

int min2(int a[], int n){
	int MIN = INT_MAX;
	int MIN_2 = INT_MAX;
	for(int i=0;i<n;i++){
		if(a[i] <MIN){
			MIN = a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i] ==MIN){
			continue;
		}else{
			if(a[i] < MIN_2){
				MIN_2 = a[i];
			}
		}
	}
	return MIN_2;
}
int main(){
	int a[100];
	int n;
	
	nhapMang(a,&n);
	printf("\nMang vua nhap la:");
	xuatMang(a,n);
	printf("\n");
	printf("\nGia tri lon thu 2 trong mang:%d",max2(a,n));
	
	printf("\n");
	printf("\nGia tri nho thu 2 trong mang:%d",min2(a,n));
	
}
















