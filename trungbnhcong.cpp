#include "stdio.h"
#include "math.h"
#include<conio.h>

#define LENGHT_OF_ARRAY(x) (sizeof(x) / sizeof(x[0]))

int main(){
	int a[100];
	int n ;
	do{
		printf("nhap vao so luong phan tu cua mang = ");
		scanf("%d",&n);
		
	}while(n<1||n>100);
	// nhap vao du lieu cua mang
	printf("nhap vao cac gia tri cua mang :");
	for(int i =0;i<n;i++){
		printf("\na[%d] = ",i);	
		scanf("%d",&a[i]);
	}
	// xuat ra man hinh du lieu vua nhap 
	printf("du lieu cua mang la : ");
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	// tinh trung binh cong 
	
	float tbc=0;
	int tong =0;
	
	for(int i =0;i<n;i++){
		tong = tong +  a[i];
		
	}
	tbc = (float)tong /n;
	printf("\ntbc cac phan tu cua mang vua nhap la =%.3f",tbc);
	
	// tinh trung binh cong cac so duong trong mang 
	
	int tongduong =0 ;
	float tbcd =0;
	
	int count = 0;
	for(int i =0;i<n;i++){
		if(a[i]>0){
			count ++ ;
			tongduong+=a[i];
			
		}
	}
	if(count ==0){
		printf("\ntat ca cac phan tu deu la so am	");
		
	}else{		
		printf("\nso luong phan tu nguyen duong cua mang la = %d",count);
		tbcd =(float) tongduong / count ;
		printf("\ntbc cac so nguyen duong trong mang la = %.2f",tbcd);
	}
	
	
	
}