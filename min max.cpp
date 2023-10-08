# include "stdio.h"

int main(){
	int a[100];
	int n ;
	do{
		printf("so phan tu cua chuoi la :");
		scanf("%d",&n);
		
	}while(n<1 || n >100);
	
	// nhap vao cac phan tu 
	printf("nhap vao cac phan tu cua mang :");
	for(int i=0;i<n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	// xuat ra cac phan tu
	printf("cac phan tu cua mang vua nhap la :");
	for(int i =0;i<n;i++){
		printf("%d ",a[i]);
	}
	// tim max
	int max = a[0];
	for(int i =0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("\nso lon nha la :%d",max);
	// tim min
	int min= a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	printf("\nso nho nhat la : %d",min);
	
	
	
}





