/*

SO SÁNH 2 CHUỖI

#include "stdio.h"
#include "string.h"



int my_strcmp(char x1[], char x2[]){
	int ketQua = 0;
	size_t len1 = strlen(x1);
	size_t len2 = strlen(x2);
	size_t min = len1<len2?len1:len2;


	for(int i=0;i<min;i++){
		ketQua = x1[i] - x2[i];
		if(ketQua!=0)
			break;
	}
	return ketQua ;
}
int main (){
	char s_1[50];
	char s_2[50];

	printf("Nhap vao s_1 = ");
	fgets(s_1, sizeof(s_1),stdin);
	printf("Nhap vao s_2 = ");
	fgets(s_2, sizeof(s_2),stdin);
	// sử dụng hàm strcmp :

	printf("ket qua so sanh : %d",strcmp(s_1, s_2));

	printf("\n--------------");
	printf("ket qua so sanh : %d",my_strcmp(s_1, s_2));
}



// CHUYỂN CHUỖI SANG VIẾT HOA HOẶC VIẾT THƯỜNG




#include "stdio.h"
#include "string.h"

void my_strupr (char x[]){
	for(int i =0 ; i<strlen(x);i++){
		if(x[i] >= 97 && x[i] <= 22){
			x[i] = x[i] - 32 ;
		}
	}
}

void my_strlwr (char x[]){
	for(int i =0 ; i<strlen(x);i++){
		if(x[i] >= 97 && x[i] <= 22){
			x[i] = x[i] + 32 ;
		}
	}
}
int main(){
	char s[50] = "";
	printf("Nhap S = ");
	fgets(s,sizeof(s),stdin);
	printf("s = %s",s);
	strupr(s);
	printf("\nChuyen sang chuoi viet hoa s = %s",s);
	my_strupr(s);
	printf("Chuyen sang chuoi viet hoa s = %s",s);


	printf("\n-----------------");

	strlwr(s);
	printf("\nChuyen sang chuoi viet thuong s = %s",s);
	my_strlwr(s);
	printf("Chuyen sang chuoi viet thuong s = %s",s);





}



// VIẾT HOA CHỮ CÁI ĐẦU TIÊN



#include "stdio.h"
#include "string.h"

void chuyenDoi(char x[]){
	for(int i =0; i <strlen(x);i++){
		if(i==0 || (i>0 && x[i-1] ==32)){
			if(x[i] >= 97 && x[i] <= 122){
				x[i]=x[i]-32 ;
			}
		}else{
			if(x[i] >= 65 && x[i] <= 90){
				x[i]=x[i] +32 ;
			}
		}
	}

	
}

int main() {
	char s[50] = "";
	printf("Nhap s = ");
	fgets(s,sizeof(s),stdin);
	printf("\ns = %s",s);
	
	chuyenDoi(s);
	printf("\ns = %s",s);
	
	
	

}






// ĐẢO NGƯỢC CHUỖI KÍ TỰ TRONG LẬP TRÌNH C




#include "stdio.h"
#include "string.h"

void xoaXuongDong(char x []){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1] = '\0';
	}
}
int main(){
	char x[50];
	printf("Nhap chuoi :");
	fgets(x,sizeof(x),stdin);
	strrev(x);
	printf("\nChuoi vua nhap la :%s",x);
	xoaXuongDong(x);
	printf("\nChuoi sau khi chuyen doi : %s",x);


}



// TÌM KIẾM KÍ TỰ TRONG CHUỖI BẰNG HÀM 



#include "stdio.h"
#include "string.h"


int main(){
	char x[100];
	char *x2;
	printf("Nhap chuoi :");
	fgets(x,sizeof(x),stdin);
	printf("\nChuoi vua nhap la :%s",x);
	x2 = strchr(x, 'y');
	printf("\nx= %s",x);
	printf("\nx2 = %s",x2);
	
	
	
}


// kiem tra chuoi 

#include "stdio.h"
#include "string.h"


int kiemTra(char x[]){
	size_t len = strlen(x);
	for(int i =0;i<len/2;i++){
		if(x[i] != x[len -i-1])
			return 0;
	}
	return 1;
}
void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

int main(){
	char x[50];
	printf("Nhap vao chuoi :");
	fgets(x,sizeof(x),stdin);
	xoaXuongDong(x);
	if(kiemTra(x)){
		printf("\nDay la chuoi doi xung");
		
	}else{
		printf("\nDay khong phai la chuoi doi xung");
	}
}

*/

// TÌM KIẾM CHUỖI CON TRONG CHUỖI 




#include "stdio.h"
#include "string.h"


void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}


int main(){
	char chuoi [50] ;
	char chuoi_con [50] ;
	
	printf("Nhap vao chuoi :");
	
	fgets(chuoi, sizeof(chuoi),stdin);
	
	xoaXuongDong(chuoi);
	
	printf("\nNhap vao chuoi con :");
	
	fgets(chuoi_con, sizeof(chuoi_con),stdin);
	xoaXuongDong(chuoi_con);
	
	char *kq = strstr(chuoi, chuoi_con);
	
	if(*kq != NULL){
		printf("\nTim thay chuoi con");
		printf("\n");
		printf("%s",kq);
	}else{
		printf("\nKhong tim thay chuoi con");
	}
}





















