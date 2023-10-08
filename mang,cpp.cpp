/*

#include "stdio.h"
// giai quyet loi khi nhap int va char khong nhap duoc
int main(){
	int tuoi;
	char ten[50];
	
	printf("Nhap vao tuoi cua ban :");
	scanf("%d",&tuoi);
	getchar();
	
	printf("\nNhap vao ten cua ban:");
	// chi xuat ra dc chuoi k co khoang trang
//	scanf("%s", ten);
	// xuat ra chuoi co ca khoang trang :
	fgets(ten, sizeof(ten), stdin);
	
	
	printf("\nTen da nhap la :");
	puts(ten);
	printf("\nTuoi :%d",tuoi);
}

*/
/*
// xóa kí tự xuống dòng khi nhập chuỗi 
#include "stdio.h"
#include "string.h"


int my_strlen(char x[]){
	int count =0;
	while(x[count]!='\0'){
		count++;
	}
	return count++;
}

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
int main(){
	// khai bao
	char ten[50] ;
	printf("Nhap vao ten cua ban :");
	fgets(ten, sizeof(ten), stdin);
	xoaXuongDong(ten);
	
	printf("\nTen cua ban la :%s",ten);
	printf("\nDo dai ten la :%d",strlen(ten));
	
	printf("\nmy_strlen :");
	printf("\nTen cua ban la :%s",ten);
	printf("\nDo dai ten la :%d",my_strlen(ten));
}



*/
/*
// nối 2 chuỗi trong C 

#include "stdio.h"
#include "string.h"
void my_strcat(char x1[], char x2[]){
	size_t len1 =strlen(x1);
	size_t len2 =strlen(x2);
	for(int i=len1;i<len1+len2 ;i++){
			x1[i]=x2[i-len1];
	}
	x1[len1 +len2 ]='\0';
}
int main(){
	char s_1 [100]= "Xin Chao";
	char s_2 [20] = "Quy Quy";
	printf("\ns_1 = %s", s_1);
	printf("\ns_2 = %s", s_2);
	
//	strcat (s_1, s_2);
	my_strcat(s_1 ,s_2);
	printf("\ns_1 = %s", s_1);
	
}

*/

//lập trình copy 2 chuỗi trong C 



/*

#include "stdio.h"
#include "string.h"

void my_strcpy(char x1[], char x2[]){
	size_t len2 = strlen(x2);
	for(int i=0;i<len2;i++){
		x1[i] = x2[i];
	}
	x1[len2]='\0';
}
int main(){
	char s_1[50] = "XIN CHAO QUY QUY";
	char s_2[50];
	
	printf("\ns_1 = %s",s_1);
	printf("\ns_2 = %s",s_2);
	
//	strcpy(s_2 , s_1);
	my_strcpy(s_2, s_1);
	
	printf("\n--------------");
	printf("\ns_1 = %s",s_1);
	printf("\ns_2 = %s",s_2);
	
}


*/

//so sánh 2 chuỗi trong lập trình C 
















































