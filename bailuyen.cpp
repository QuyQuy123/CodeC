// bài 1 :họ tên , điểm toán , điểm văn
/*
#include "stdio.h"
#include "string.h"


char hoten[100];
int toan;
int van ;
float diemTrungBinh ;



void nhapHam(){
	printf("\nNhap Ho va Ten :");
	scanf("%s",&hoten);
	printf("\nNhap diem mon toan :");
	scanf("%d",&toan);
	printf("\nNhap diem mon van :");
	scanf("%d",&van);
}


void xuatHam(){
	printf("\nHo Ten :%s",hoten);
	printf("\nDiem toan :%d",toan);
	printf("\nDiem van :%d",van);
	printf("\nDiem trung binh :%.2f",diemTrungBinh);
}

void xuLy(){
	diemTrungBinh =(float)(toan +van)/2;
}
int main(){
	nhapHam();
	xuLy();
	xuatHam();
}
*/

// bài 2 : kiem tra số nguyên tố n :
/*
#include "stdio.h"
int kiemtra_snt(int x){
	if(x<=1)
		return 0;

	for(int i=2;i<x-1;i++){
		if(x%i==0)
			return 0;
	}
	return 1 ;
}

int main(){
	int n ;
	printf("\nNhap vao gia tri cua n =");
	scanf("%d",&n);
	int kt = kiemtra_snt(n);
	if(kt==1){
		printf("\nDay la so nguyen to");

	}else{
		printf("\nDay khong phai la so nguyen to");
	}
}


*/



//bai 3 : liet ke so nguyen to <n

/*
#include"stdio.h"
#include "math.h"
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
	int n ;
	do{
		printf("\nNhap vao gia tri cua n :");
		scanf("%d",&n);

	}while(n<=1);
	printf("\Cac so nguyen to < %d la : ",n);
	for(int i=2;i<=n;i++){
		if(kiemtra_snt(i)){
			printf("%d ",i);
		}
	}
}

*/

//bai 4 :kiem tra  so chinh phuong , n :
/*
#include "stdio.h"
#include "math.h"

int kiemtra_scp(int x){
	int y = sqrt(x);
	if(pow(y,2)==x){
		return 1 ;
	}
	return 0;

}
int main(){
	int n ;
	do{
		printf("Nhap vao gia tri cua n :");
		scanf("%d",&n);
	}while(n<=0);

	int kq = kiemtra_scp(n);
	if(kq){
		printf("\n%d la so chinh phuong",n);
	}else{
		printf("\nDay khong phai la so chinh phuong");
	}
}

*/

// bai 5 : liet ke cac so chinh phuong < n ;
/*
#include "stdio.h"

#include "math.h"

int kiemtra_scp(int x){
	int y = sqrt(x);
	if(pow(y,2)==x)
		return 1 ;
	return 0 ;
}
int main(){
	int n;
	do{
		printf("Nhap vao gia tri cua n :");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<=n;i++){
		int kq = kiemtra_scp(i);
		if (kq == 1 ){
			printf("%d ",i);
		}
	}
}


*/

// bai 6 : Nhap vao n va tinh tong : x + x^2 +x^3 + x^4 +.........+ x^n   ;
/*
#include "stdio.h"

#include "math.h"

int x ;
int n ;

int main(){
	int tong = 0;
	do{
		printf("Nhap vao gia tri cua x : ");
		scanf("%d",&x);
		printf("\nNhap vao gia tri cua n :");
		scanf("%d",&n);
	}while(n<0);


	for(int i=1;i<=n;i++){
		tong = tong + pow(x,i);
	}
	printf("\nTong cua day so la :");
	printf("%d",tong);
}

*/

// bai 7 :tim uoc chung lon nhat cua 2 so nguyen duong  ;
/*
#include "stdio.h"

int main(){
	int a ,b;
	do{
		printf("Nhap vao gia tri cua a : ");
		scanf("%d",&a);
		printf("Nhap vao gia tri cua b : ");
		scanf("%d",&b);
	}while(a<=0|| b<=0);

	if(a ==b){
		printf("\nUCLN cua 2 so la :%d",a);
	}else{
		while(a!=b){
			if (a> b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
		printf("\nUCLN cua 2 so la :%d",a);
	}


}

*/

/*
// bai 8 : Vẽ ra tam giác cân ;

// bài 9 : tìm max trong mang 1 chieu ;;

#include "stdio.h"
#include "math.h"
int a[100];
int n;

void nhapMang(int x[100],int &n){
	do{
		printf("Nhap vao gia tri cua mang n = ");
		scanf("%d",&n);

	}while(n<0||n>100);
	for(int i=0;i<n;i++){
		printf("\nx[%d] =",i);
		scanf("%d",&x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("\nMang vua nhap la :");
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}


void kiemTra_Max(int x[100],int n){
	int max =x[0];
	for(int i=0;i<n;i++){
		if(x[i]> max){
			max = x[i];
		}

	}
	printf("%d",max);
}
void kiemTra_Min(int x[100],int n){
	int min =x[0];
	for(int i=0;i<n;i++){
		if(x[i]< min){
			min = x[i];

		}

	}
	printf("%d",min);
}

void viTri_Min(int x[100], int n){
	int vimin = 0;
	for(int i=0;i<n;i++){
		if(x[i]< x[vimin]){
			vimin = i;
		}
	}
	printf("x[%d]",vimin);
}
void viTri_Max(int x[100], int n){
	int vimax = 0;
	for(int i=0;i<n;i++){
		if(x[i]> x[vimax]){
			vimax = i;
		}
	}
	printf("x[%d]",vimax);
}

void sapXep(int x[100],int n){
	for(int i =n-1;i>=0;i--){
		printf("%d ",x[i]);
	}
}

// kiem tra co ton tai 1 so chan < 50 hay khong :

int kiemTra_Chan(int x[100], int n ){
	for(int i=0;i<n;i++){
		if(x[i]%2==0 && x[i] < 50){
			return 1 ;
		}
	}
	return 0;
}
// dem so luong so nguyen to < 100 trong mang ;



int main(){

	nhapMang(a,n);
	xuatMang(a,n);

	printf("\n");
	printf("\nMang theo thu tu nguoc lai :");
	sapXep(a,n);


	printf("\nGia tri lon nhat trong mang la :");
	kiemTra_Max(a,n);

	printf("\nVi tri lon nhat tai :");
	viTri_Max(a,n);

	printf("\nGia tri nho nhat trong mang la :");
	kiemTra_Min(a,n);

	printf("\nVi tri nho nhat tai :");
	viTri_Min(a,n);

	int kt = kiemTra_Chan(a,n);
	if(kt ==1){
		printf("\nTrong mang co ton tai so chan nho hon 50");
	}else{
		printf("\nKhong ton tai so chan nho hon 50 trong mang vua nhap");
	}







}



*/

// bai tap
/*

#include "stdio.h"
#include "math.h"


int n;
int a[100];

void nhapMang(int x[100], int &n) {
	do {
		printf("Nhap vao so phan tu cua mang cam bien nhiet do T n = ");
		scanf("%d",&n);

	} while(n<=0);
	printf("\nNhap vao gia tri cac phan tu :");

	for(int i=0; i<n; i++) {
		printf("\nx[%d] = ",i);
		scanf("%d",&x[i]);
	}
//	for(int i=0;i<n;i++){
//		if(x[i]>18 && x[i]<25){
//			printf("\nThoi tiet mat me!!");
//		}else{
//			printf("\n");
//		}
//	}
}

int kiemTra_T( int x[100], int n) {
	for(int i=0; i<n; i++) {
		if(x[i]>18 && x[i]<25){
			return 1;
			break;
		}
	}
	return 0;

}

int main() {
	// a,b:
	nhapMang(a,n);
	//c :

	int kq = kiemTra_T(a,n);
	if(kq==1 ) {
		printf("\nThoi tiet mat me !");
	} else {
		printf("\n");
	}


}





// BAI 1 DE CONG NGHIEP :


#include "stdio.h"
#include "math.h"

float y;
int m;

void nhapHam(float &x,int &n){
	scanf("%f",&x);
	do{
		scanf("%d",&n);
	}while(&n<0);
}
void tinhBieu_Thuc(int x,int n){
	float P = 0;
	if(x>0 &&n>=0){
		for(int i=1;i<=n;i++){
			P += (sqrt(pow(x,i))) /i;
		}
		printf("\nGia tri cua bieu thuc P thoa man dieu kien de bai la : %.2f",P);
	}else{
		P = 2023*x + pow(n,5.0);
		printf("\nGia tri cua bieu thuc P thoa man dieu kien de bai la : %.2f",P);
	}
}

int main (){
	printf("Nhap vao gia tri cua y va gia tri nguyen duong cua m = ");
	nhapHam(y,m);

	tinhBieu_Thuc(y,m);
	return 0;
}


*/


//
/*
#include "stdio.h"
#include "math.h"

int a[100];
int n ;

void nhapMang(int x[100], int &n) {
	do {
		printf("Nhap vao so luong phan tu cua mang :");
		scanf("%d", &n);

	} while(n<=0);
	for(int i=0; i<n; i++) {
		printf("\nx[%d] = ",i);
		scanf("%d", &x[i]);
	}
}
int kiemtra_snt(int x ) {
	if(x<1)
		return 0;
	for(int i=2; i<=sqrt(x); i++) {
		if(x%i == 0)
			return 0;

	}
	return 1 ;
}
void tinhTong_SNT (int x[]) {
	int sum = 0 ;
	for(int i=0; i<n; i++) {
		if(kiemtra_snt(x[i])) {

			sum += x[i];
		}

	}
	printf("\nTong cua cac so nguyen to trong mang la : %d",sum);

}
int main () {
	nhapMang(a,n);

	printf("\nCac so nguyen to co trong mang la :");
	for(int i=0; i<n; i++) {
		if (kiemtra_snt(a[i]) ) {
			printf("%d ",a[i]);

		} else {
			printf("------");
		}
	}
	tinhTong_SNT(a);
	return 0;


}





#include "stdio.h"

int main (){
	int a ,b ,tong;
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	
	printf("Nhap vao gia tri cua a va b :");
	scanf("%d %d",&a ,&b);
	
	tong = *ptr1 + *ptr2 ;
	printf("Tong cua 2 so a va b la :%d",tong);
	
	return 0;
	
	
}



// hoán đổi giá trị 2 biến a và b :

#include "stdio.h"

void swap(int *num1, int *num2){
	int temp ;
	temp = *num1 ;
	*num1 = *num2 ;
	*num2 = temp ;
}
int main(){
	int num1 , num2 ;
	printf("Nhap vao gia tri cua so thu nhat va so thu hai :");
	scanf("%d %d", &num1, &num2);
	
	swap(&num1, &num2);
	
	printf("\nGia tri cua num1 sau khi hoan doi :%d", num1);
	printf("\nGia tri cua num2 sau khi hoan doi :%d", num2);
	return 0;
}




// tinh tong cac phan tu cua mang su dung con tro :


#include "stdio.h"

int main(){
	int  a ,b ;
	printf("Nhap vao gia tri cua a va b : ");
	scanf("%d %d",&a, &b);
	if( (a %2 ==0 && b % 2 ==0) || (a % 2 !=0 && b% 2 !=0) ){
		printf("1");
	}else{
		printf("0");
	}
}



*/

#include <stdio.h>

void printChessboard() {
    char chessboard[8][8] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
    };

    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            printf("%c ", chessboard[row][col]);
        }
        printf("\n");
    }
}

int main() {
    printChessboard();
    return 0;
}






































