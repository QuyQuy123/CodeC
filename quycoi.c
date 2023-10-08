#include "stdio.h"
#include "string.h"
#include "stdlib.h"
	
int main(){
	
	char a[100];
	int n;	
	printf("Nhap vao so luong ki tu cua mang:");
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		printf("\na[%d]=",i);
		
		getchar();
	}
	printf("\nCac phan tu cua mang sau khi nhap:");
	for(int i=0;i<n;i++){
		printf("%c",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j] < a[i]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nMang sau khi sap xep:");
	for(int i=0;i<n;i++){
		printf("%c",a[i]);
	}
	
	return 0;
}