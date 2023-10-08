#include "stdio.h"
#include "math.h"
int kiemtra(int x ){
	
	return (x%2==0 && x%3==0);
}
int kiemtra_snt(int x ){
	if(x<1)
		return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return 0;
			
	}
	return 1 ;
}
int main(){
	int a[100];
	int n,i ;
	
	do{
		printf("nhap vao so luong phan tu cua chuoi :");
		scanf("%d",&n);
		
	}while(n<1|| n >100);
	// nhap vao phan tu
	
	for(int i=0;i<n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	// xuat ra phan tu
	printf("\ncac phan tu cua mang vua nhap la :");
	for(int i =0 ;i<n;i++){
		printf("\n%d",a[i]);
	}
	
	// liet ke cac phan tu chan va chia het cho 3
	printf("\nphan tu chan va chia het cho 3 la :");
	for(int i=0;i<n;i++){
		if(kiemtra(a[i])){
			printf("%d",a[i]);
		}
	}
	// kiem tra so nguyen to
	
	printf("\nphan tu la so nguyen to la :");
	for(int i=0;i<n;i++){
		if (kiemtra_snt(a[i]) ){
			printf("%d",a[i]);
		
		}
		
		
	}
	
	
		
	
		
	
	
	
		

	

	
	
	
	
	
	
	
	
}