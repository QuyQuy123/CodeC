/*
#include "stdio.h"

int a[100][100];
int m ,n ;
void nhapMang(int x[100][100],int &m , int &n){
	do{
		printf("Nhap vao gia tri cua m va n :");
		scanf("%d%d",&m,&n);
	}while(m<0||n<0);

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("x[%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
}

void xuatMang(int x[100][100], int m , int n){
	printf("\nGia tri cua mang vua nhap :\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}
int main(){
	nhapMang(a,m,n);
	xuatMang(a,m,n);
}

*/

//// tim kiem 1 so nao do trong mang 2 chieu :
/*
#include "stdio.h"


int a[100][100];
int m,n;

void nhapMang(int x[100][100], int &m, int &n) {
	do {
		printf("Nhap vao gia tri cua m va n : ");
		scanf("%d%d",&m,&n);
	} while(m<0|| n<0);

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("\nx[%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);

		}

	}
}

void xuatMang(int x[100][100],int m,int n) {
	printf("\nGia tri cua mang vua nhap la :\n");
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}


}

int timKiem(int x[100][100], int m, int n, int giaTri) {
	int kq =0;
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(x[i][j]==giaTri)
				kq=1;
		}
	}
	return kq ;
}


void thucHien(int x[100][100], int m, int n) {
	int luachon=0;
	do {
		int giaTri;
		printf("\nNhap vao gia tri tim kiem:");
		scanf("%d",&giaTri);
		int kq =timKiem(x,m,n,giaTri);
		if(kq) {
			printf("\nTim thay gia tri can tim");
		}else {
			printf("\nKhong Tim thay gia tri can tim");

		}
		printf("\nNhap vao so bat ki de tiep tuc hoac nhap vao so 0 de thoat :");
		scanf("%d",&luachon);
	} while(luachon!=0);

}
int main() {
	nhapMang(a,m,n);
	xuatMang(a,m,n);
	thucHien(a,m,n);
}
 */



// tinh trung binh cong tat ca cac phan tu trong mang 2 chieu or thoa man 1 dieu kien nao do :
/*
# include "stdio.h"



int a[100][100];
int m,n ;

void nhapMang(int x[100][100], int &m, int &n) {
	do {
		printf("Nhap vao gia tri cua m va n :");
		scanf("%d%d",&m,&n);

	} while(m<0||n<0);
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("\nx[%d][%d] =",i,j);
			scanf("%d",&x[i][j]);
		}
	}

}

void xuatMang(int x[100][100], int m, int n) {
	printf("\nGia tri cua mang vua nhap la :\n");
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}


}

// a , tinh trung binh cong cac phan tu :
double trungBinh(int x[100][100],int m, int n) {
	int tong =0;
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			tong = tong +x[i][j];
		}
	}
	printf("\nTong la :%d",tong);
	double tb = (double)tong /(m*n);
	return tb;
}

// tinh trung binh cong cac phan tu chia het cho 5 ;


double trungBinh_ch(int x[100][100], int m , int n){
	printf("\nCac so trong mang chia het cho 5 la :");
	int tongchia =0;
	int count =0;
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(x[i][j] % 5 ==0){
				tongchia +=x[i][j];
				count ++;
				printf("%d ",x[i][j]);

			}
		}

	}
	double tbc = (double)tongchia / count;
	return tbc;


}

// tim so lon nhat trong mang
int kiemTra_Max (int x[100][100],int m , int n ){
	printf("\nGia tri lon nhat cua mang la :");
	int max =x[0][0];
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(x[i][j] > max)
				max = x[i][j];
		}
	}
	return max ;
	printf("%d",max);
}

// tim so nho nhat trong mang ;

int kiemTra_Min (int x[100][100],int m , int n ){
	printf("\nGia tri nho nhat cua mang la :");
	int min =x[0][0];
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(x[i][j] < min)
				min = x[i][j];
		}
	}
	return min ;
	printf("%d",min);
}
int main () {
	nhapMang(a,m,n);
	xuatMang(a,m,n);
	printf("\nTrung binh cong cac so trong mang la :%.2f",trungBinh(a,m,n));
	printf("\nTrung binh cong cac so chia het 5 la :%.2f",trungBinh_ch(a,m,n));
	printf("%d",kiemTra_Max(a,m,n));
	printf("%d",kiemTra_Min(a,m,n));

}


*/

// tim min max theo tung dong , tung cot :
/*
#include "stdio.h"
int a[100][100];
int m , n;

void nhapMang(int x[100][100],int &m, int &n){
	do{
		printf("Nhap vao gia tri cua m va n :");
		scanf("%d%d",&m,&n);
	}while(m<0||n<0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\nx[%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
}

void xuatMang(int x[100][100], int m , int n){
	printf("\nDu lieu vua nhap la :\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}

}

// tim so lon nhat cua tung dong :
int xet_Max(int x[100][100], int m , int n, int dong){
	int max = x[dong][0];
	for(int j=0;j<n;j++){
		if(max < x[dong][j]){
			max = x[dong][j];
		}
	}
	return max ;
}
// gia tri nho nhat cua tung dong
int xet_Min(int x[100][100], int m , int n, int dong){
	int min = x[dong][0];
	for(int j=0;j<n;j++){
		if(min > x[dong][j]){
			min = x[dong][j];
		}
	}
	return min ;
}
// tim gia tri max theo tung cot :
int xetmax_Cot(int x[100][100], int m , int n, int cot){
	int max = x[0][cot];
	for(int i=0;i<n;i++){
		if(max < x[i][cot]){
			max = x[i][cot];
		}
	}
	return max ;
}
int xetmin_Cot(int x[100][100], int m , int n, int cot){
	int min = x[0][cot];
	for(int i=0;i<n;i++){
		if(min > x[i][cot]){
			min = x[i][cot];
		}
	}
	return min ;
}


int main(){
	nhapMang(a,m,n);
	xuatMang(a,m,n);

	for(int dong =0;dong <m;dong++){
		printf("\n Gia tri lon nhat cua dong thu %d la: %d",dong , xet_Max(a,m,n,dong));
}
	for(int dong =0;dong <m;dong++){
		printf("\n Gia tri nho nhat cua dong thu %d la: %d",dong , xet_Min(a,m,n,dong));
}

	for(int cot =0;cot <n;cot++){
		printf("\n Gia tri lon nhat cua cot thu %d la: %d",cot , xetmax_Cot(a,m,n,cot));
}
	for(int cot =0;cot <n;cot++){
		printf("\n Gia tri nho nhat cua cot thu %d la: %d",cot , xetmin_Cot(a,m,n,cot));
}



}



*/

// chuyen mang 2 chieu thanh mang 1 chieu :

/*
#include "stdio.h"

int a[100][100],b[100000];
int m,n,k;
void nhapMang(int x [100][100], int &m, int &n) {
	do {
		printf("Nhap vao gia tri cua m va n :");
		scanf("%d%d",&m,&n);
	}while(m<0||n<0);
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++){
			printf("\nx[%d][%d] =",i,j);
			scanf("%d",&x[i][j]);

		}
	}
}
void xuatMang(int x [100][100], int m, int n) {
	printf("\nGia tri mang vua nhap la :\n");
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("%d\t",x[i][j]);

		}
		printf("\n");
	}
}

void chuyen_Mang(int x[100][100], int m , int n , int y[10000], int &k){
	int index =0;
	k =m*n;
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++){
			y[index] = x[i][j];
			index++;

		}
	}
}
void xuatMangMotChieu(int x[10000], int n){
	printf("Mang 1 chieu la :");
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}
int main() {
	nhapMang(a,m,n);
	xuatMang(a,m,n);
	chuyen_Mang(a,m,n,b,k);
	xuatMangMotChieu(b,k);

}

*/

/*
// sap xep mang 2 chieu :
#include "stdio.h"
int a[100][100];
int m,n;

void nhapMang(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao gia tri cua m va n :");
		scanf("%d%d",&m,&n);

	}while(m<0|| n<0);

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\nx[%d][%d] =",i,j);
			scanf("%d",&x[i][j]);
		}

	}
}

void xuatMang(int x[100][100],int m , int n ){
	printf("\nGia tri cua mang vua nhap la :\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");

	}
}

// sap xep mang theo thu tu tu be den lon :

void sapXep(int x[100][100], int m, int n ){
	int k =m*n;
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(x[i/n][i%n] > x[j/n][j%n]){
				int temp = x[i/n][i%n];
				x[i/n][i%n] = x[j/n][j%n];
				x[j/n][j%n] = temp;
			}
		}

	}
}


void xoaDong(int x[100][100],int &m , int n , int k){
	if(k<0||k>=m)
		return ;

	for(int i=k;i<m-1;i++){
		for(int j=0;j<n;j++){
			x[i][j] = x[i+1][j];
		}
	}
	m=m -1;
}
int main(){
	nhapMang(a,m,n);
	xuatMang(a,m,n);
//	sapXep(a,m,n);
//	printf("\nMang sau khi sap xep la :\n");
//	xuatMang(a,m,n);
	xoaDong(a,m,n,1);
	xuatMang(a,m,n);

}



*/

// kiem tra doi xung qua duong cheo chinh


#include "stdio.h"

int a[100][100];
int n ;
void nhapMang(int x[100][100], int &n) {
	do {
		printf("Nhap vao gia tri cua hang va cot :");
		scanf("%d",&n);

	} while(n<0||n>100);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("\nx[%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
	}


}
void xuatMang(int x[100][100], int n) {
	printf("\nGia tri cua mang vua nhap la :\n");
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}

}
int kiemTra_Chinh(int x[100][100], int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if (x[i][j] != x[j][i]) {
				return 0;
			}
		}

	}
	return 1 ;

}
int kiemTra_Phu(int x[100][100], int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if (x[i][j] != x[n-1-j][n-1-i]) {
				return 0;
			}
		}

	}
	return 1 ;

}
int main () {
	nhapMang(a,n);
	xuatMang(a,n);
	int kq =kiemTra_Chinh(a,n);
	if(kq) {
		printf("\nDay la mang doi xung qua duong cheo chinh");
	} else {
		printf("\nMang khong doi xung qua duong cheo chinh");
	}
	int dn= kiemTra_Phu(a,n);
	if(dn) {
		printf("\nDay la mang doi xung qua duong cheo phu");
	} else {
		printf("\nMang khong doi xung qua duong cheo phu");
	}
}



















