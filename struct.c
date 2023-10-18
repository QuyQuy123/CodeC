#include <stdio.h>

struct Date {
	int day;
	int month;
	int year;
};
void nhapDate( struct Date *d){
	printf("Nhap vao ngay:");
	scanf("%d",&d->day);
	printf("Nhap vao thang:");
	scanf("%d",&d->month);
	printf("Nhap vao nam:");
	scanf("%d",&d->year);
}
void outputDate(struct Date d){
	printf("%d/%d/%d",d.day , d.month, d.year);
	
}
int main(){
	struct Date myDate;
	nhapDate(&myDate);
	printf("\n");
	printf("------------\n");
	outputDate(myDate);
	
	return 0;

}