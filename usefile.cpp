/*
// lưu file 
#include "stdio.h"
#include "stdlib.h"

int main(){
	FILE *f;
	f = fopen("bai_1.txt","w");
	if(f== NULL ){
		printf("\nLoi Tao or Mo File");
		exit(1);
	}
	
	int n ;
	printf("\nNhap vao so n:");scanf("%d",&n);
	fprintf(f,"%d",n);

	
	fclose(f);
	
	return 0;
	
}

// đọc file :
#include "stdio.h"
#include "stdlib.h"

int main(){
	FILE *f;
	f = fopen("bai_1.txt","r");
	if(f== NULL ){
		printf("\nLoi Tao or Mo File");
		exit(1);
	}
	
	int n ;

	fscanf(f,"%d",&n);
	printf("\nGia tri cua n :%d",n);
	
	fclose(f);
	
	return 0;
	
}

*/ 
// lưu file dưới dạng nhị phân :



#include "stdio.h"
#include "stdlib.h"

struct NgaySinh{
	int ngay;
	int thang;
	int nam;
};


int main(){
	FILE *f;
	// tao mo file
	f= fopen("file nhi phan.bin","wb");
	if(f== NULL){
		printf("\nLoi Tao File !!");
		exit(1);
	}
	// ghi du lieu
	
	NgaySinh n1 ;
	n1.ngay =1 ;
	n1.thang = 12;
	n1.nam = 2024;
	
	fwrite(&n1, sizeof(struct NgaySinh),1,f);
	// dong file
	
	fclose(f);
	
	
	return 0;
	
}



























