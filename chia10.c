#include "stdio.h"

int main(){
	int m ,n;
	printf("Nhap vao so nguyen m co 4 chu so abcd = ");//1234
	scanf("%d",&m);
	printf("\nNhap vao so nguyen n co 4 chu so efgh = ");//5678
	scanf("%d",&n);
	
	int du1 , du2;
	
	du1 = m % 10 ;
	du2 = n % 10 ;
	printf("\nS = %d",du1+du2);
	int max1;
	
	do{
		max1 = m % 10;
	}while (m = m/10);
	printf("\nChu so dau tien cua so t1:%d",max1);
	
	int max2;
	
	do{
		max2 = n % 10;
	}while (n = n/10);
	printf("\nChu so dau tien cua so t1:%d",max2);
	
	printf("\nP=%d",max1*max2);
	
	
	return 0;
	
	
}