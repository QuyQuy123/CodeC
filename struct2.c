#include <stdio.h>;

struct sinhVien{
	char name[20] ;
	int age ;
	float diemToan;
	
};
void inputStudent( struct sinhVien *k ){
	printf("Nhap vao ten:");
	fgets(k->name,sizeof(k->name),stdin);
	printf("\nNhap tuoi:");
	scanf("%d",&k->age);
	printf("\nNhap diem Toan:");
	scanf("%f",&k->diemToan);
}
void outputStudent( struct sinhVien k){
	printf("Ten:%s",k.name);
	printf("\nTuoi:%d",k.age);
	printf("\nDiem:%.2f",k.diemToan);
	
}
int main(){
	struct sinhVien quy;
	inputStudent(&quy);
	printf("-----------\n");
	printf("\n");
	outputStudent(quy);
		
	return 0;
}