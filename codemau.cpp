#include "stdio.h"
#include "math.h"
int check_so(int a){
	int ketqua = sqrt(a);
	if(pow(ketqua,2)!=a){
		return 0;
	}
	return 1;
}
int main(){
	int a ;
	do{
		printf("Nhap a:");
		scanf("%d",&a);
	}while(a <=0);
	printf("\nCac so chinh phuong <n la :");
	for(int i=0;i<a;i++){
		if(check_so(i)){
			printf("%d ",i);
		}
	}
}