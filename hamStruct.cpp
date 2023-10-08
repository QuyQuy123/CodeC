/*
#include "stdio.h"

struct Date{
	int day;
	int month;
	int year;
};

void inputDate(struct Date &d){
	printf("Nhap vao ngay :");
	scanf("%d",&d.day);
	printf("\nNhap vao thang :");
	scanf("%d",&d.month);
	printf("\nNhap vao nam :");
	scanf("%d",&d.year);

}
void printDate(struct Date d){
	printf("%d/%d/%d",d.day,d.month,d.year);
}

int checkDate(struct Date d){
	if(d.day<0 || d.month <0|| d.year <0)
		return 0;
	if(d.month>12)
		return 0;
	if(d.month == 2 ){
		if(d.day >28 )
			return 0;
	}
	if(d.month ==1|| d.month ==3||d.month ==5||d.month ==7||d.month ==8||d.month ==10||d.month ==12){
		if(d.day >31)
			return 0;
	}
	if(d.month==4||d.month==6||d.month==9||d.month==11)
		if(d.day>30)
			return 0;


	return 1 ;
}
int main(){
	struct Date myDate;
	inputDate(myDate);
	printf("\n---------\n");
	printDate(myDate);

	printf("\nKiem tra ngay hop le :%s",checkDate(myDate) ==1 ?"Hop LE!!":"Khong Hop Le!");
}


*/

// bai tap rut gon phan so :


#include "stdio.h"
#include "math.h"

struct Phanso {
	int tuSo;
	int mauSo;
};

void nhapPhanSo(Phanso *ps) {
	printf("Nhap vao tu so :");
	scanf("%d",&ps -> tuSo);
	do {
		printf("Nhap vao mau so :");
		scanf("%d",&ps -> mauSo);
	} while(ps->mauSo == 0);

}
void rutGon(Phanso *ps) {
	int a = ps -> tuSo;
	int b = ps -> mauSo;
	int USCLN = 1;
	a = abs(a);
	b = abs(b);


	if(a==0|| b==0) {
		USCLN = (a+b);

	} else {
		while(a!=b) {
			if(a>b) {
				a=a-b;
			} else {
				b=b-a;
			}

		}
		USCLN =a ;
	}
	ps -> tuSo/=USCLN;
	ps ->mauSo/=USCLN;

}
void inPhanSo(Phanso ps) {
	if(ps.mauSo < 0) {
		ps.tuSo*=-1;
		ps.mauSo*=-1;

	}

	rutGon(&ps);
	if(ps.mauSo ==1) {
		printf("%d",ps.tuSo);
	}else {

		printf("%d/%d",ps.tuSo,ps.mauSo);
	}


}


PhanSo congHaiPhanSo(PhanSo ps1, PhanSo ps2) {
	PhanSo KetQua;
	KetQua.tuSo = ps1.tuSo*ps2.mauSo + ps2.tuSo*ps1.mauSo;
	KetQua.mauSo = ps1.mauSo*ps2.mauSo;
	return ketQua;
}
int main() {

	Phanso ps1, ps2 ;
	printf("\nNHAP PHAN SO THU NHAT");
	printf("\n");
	nhapPhanSo(&ps1);

	printf("\nNHAP PHAN SO THU HAI");
	printf("\n");
	nhapPhanSo(&ps2);

	printf("\nPhan so thu nhat vua nhap la :");
	inPhanSo(ps1);

	printf("\nPhan so thu hai vua nhap la :");
	inPhanSo(ps2);
	
	printf("Cong hai phan so :");
	inPhanSo(ps1);printf("+");inPhanSo(ps2);printf("=");inPhanSo(congHaiPhanSo(ps1,ps2));


}
































