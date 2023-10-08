//#include "stdio.h"
//
//int main(){
////	int x[] ={1,9,3,8,5};
////	for(int i=0;i<5;i++){
////		printf("%d ",&x[i]);
////	}
//	int x[10];
//	int n =5;
//	printf("Nhap vao cac gia tri cua mang :");
//	for(int i=0;i<n;i++){
//		printf("x[%d] =",i);
////		scanf("%d",&x[i]);
//
//		scanf("%d",x+i);
//
//
//	}
//	printf("\nGia tri cua mang la :");
//	for(int i=0;i<n;i++){
////		printf("%d ",x[i]);
//
//		printf("%d ", *(x+i));
//
//	}
//
//
//
//}

/*
#include "stdio.h"
// truyen tham chieu:
void swap_1(int &a , int &b){
	int temp = a ;
	a = b ;
	b = temp ;

}
// con tro
void swap_3(int *a , int *b){
	int temp = *a ;
	*a = *b ;
	*b = temp ;

}

int main(){
	int a =5;
	int b=10;
	printf("\nTruoc khi swap_1 : a = %d , b = %d" , a,b);
	swap_1(a,b);
	printf("\nSau khi swap_1 : a = %d , b = %d" , a,b);


	printf("\nTruoc khi swap_3 : a = %d , b = %d" , a,b);
	swap_3(&a,&b);
	printf("\nSau khi swap_3 : a = %d , b = %d" , a,b);
}


*/
//	CAU 2 DE CONG NGHIEP :
/*
#include "stdio.h"
#include "stdlib.h"


//a.
int main() {
	// nhap mang ;
	int n;
	do {
		printf("Nhap so luong phan tu :");
		scanf("%d",&n);

	} while(n<=0 && n>=20);

	int* ptr = (int*)malloc(n*sizeof(int));

	if(ptr == NULL) {
		printf("\nError :Khong cap phat duoc bo nho");
		return 0;

	}
	for(int i=0; i<n; i++) {
		printf("a[%d] = ",i);
		scanf("%d", ptr+i);

	}
	// xuat mang :
	printf("\nDu lieu vua nhap la :");

	for(int i=0; i<n; i++) {
		printf("%d ", *(ptr+i));
	}
	free(ptr);
}



*/



//	CÁCH SỬ DỤNG CON TRỎ


//#include "stdio.h"
//#include "stdlib.h"
///* giá trị của con trỏ là địa chỉ của 1 biến
// a nó chính là con trỏ , nên có thể sử dụng :
// .&a[i] : (a+i )
// .a[i] : *(a +i )
//*/
//int main(){
//	 int *ptr =(int*)malloc(1000*sizeof(int));
//	 int n =5;
//	 for(int i =0 ;i<n;i++){
//	 	scanf("%d",&prt[1]);
//	 }
//}
//
//
//// cấp phát động
//
//int *ptr =(int*)malloc(1000*sizeof(int));




// tính tổng các phần tử của mảng có sử dụng con trỏ:
/*

#include "stdio.h"
#include "stdlib.h"


int main () {
	int n ;
	int *ptr =(int*)malloc(1000*sizeof(int));

	do {
		printf("Nhap vao so luong phan tu cua mang : ");
		scanf("%d", &n);

	} while(n<=0);
	int sum =0;
	for(int i=0; i<n; i++) {
		printf("x[%d] = ",i);
		scanf("%d", &ptr[i]);
	}
	printf("\nGia tri cua mang vua nhap la :");
	for(int i=0; i<n; i++) {
		printf("\n%d",ptr[i]);
	}
	for(int i=0; i<n; i++) {
		sum += ptr[i];
	}

	printf("\nTong cua mang vua nhap la : %d",sum);
	free(ptr);

	return 0;
}


*/


#include <stdio.h>

int main() {
	// Khai báo + khởi tạo biến value = 10
	int value = 10;

	// Lấy giá trị của biến value
	printf("\nGia tri cua value = %d", value);
	// Lấy địa chỉ của biến value
	printf("\nDia tri cua value = %d", &value);

	printf("\n-------------------\n");

	/*
	Khai báo + khởi tạo biến con trỏ p
	có giá trị là địa chỉ của biến value
	*/
	int *p = &value;

	// Lấy giá trị của con trỏ p
	printf("\nGia tri cua con tro p = %d", p);
	// Lấy địa chỉ của con trỏ p
	printf("\nDia tri cua con tro p = %d", &p);
	// Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
	printf("\nGia tri cua bien ma con tro p dang tro toi = %d", *p);

	printf("\n-------------------\n");

	// thay đổi giá trị của biến qua con trỏ 
	// Lấy giá trị của biến value
	printf("\nGia tri cua value = %d", value);
	// Thay đổi giá trị của biến value thông qua `p`
	*p = 100;
	// Lấy giá trị của biến value
	printf("\nGia tri cua value = %d", value);
	// Lấy giá trị của biến ma con trỏ p đang trỏ tới dùng toán tử *
	printf("\nGia tri cua bien ma con tro p dang tro toi = %d", *p);

	printf("\n-------------------\n");


}










































