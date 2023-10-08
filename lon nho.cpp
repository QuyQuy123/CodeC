#include "stdio.h"
#include "math.h"


void swap (int &a , int &b){
	int tam = a ;
	a=b;
	b=tam;
}
void sapXepTang( int x[], int n){
	for(int i=0;i<n;i++){
		int vitrimin =i;
		for(int j=i+1;j<n;j++){
			if(x[j]<x[vitrimin])
				vitrimin = j;
		}
		swap(x[vitrimin],x[i]);
	}
}

void sapXepGiam(int x[], int n ){
	for(int i=0;i<n;i++){
		int vitrimax =i;
		for(int j=i+1;j<n;j++){
			if(x[j]>x[vitrimax])
				vitrimax=j;
		}
		swap(x[i],x[vitrimax]);
	}
}
void printMang(int x[] , int n ){
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}



int main(){
	int a[100];
	int n ;
	
	do{
		printf("nhap vao so luong phan tu cua mang :");
		scanf("%d",&n);
		
	}while(n<1||n>100);
	// nhap vao cac phan tu
	
	printf("nhap vao cac phan tu :");
	for(int i=0;i<n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);		
	}
	
	// xuat ra cac phan tu vua nhap 
	
	printf("cac phan tu vua phap cua mang :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nMang sap xep theo chieu tang dan la :");
	sapXepTang(a , n);
	printMang(a , n);
	
	printf("\nMang sap xep theo chieu giam dan la :");
	sapXepGiam(a,n);
	printMang(a,n);
	
	
	
	
	
	
	
	
}
