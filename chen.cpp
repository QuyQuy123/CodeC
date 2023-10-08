#include "stdio.h"
#include "limits.h"


int a[100];
int n ;

void nhapMang(int x[100], int &n){
	do{
		printf("nhap vao so luong phan tu cua mang :");
		scanf("%d",&n);
		
	}while(n<1|| n>100);
	for(int i=0;i<n;i++){
		printf("\nx[%d] =",i);
		scanf("%d",&x[i]);
	}
	
}

void xuatMang(int x[100],int n ){
	printf("gia tri cua mang la :");
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
		
	}
	
}
void themVaoCuoi(int x[100],int &n ,int m){
	int size = sizeof(x)/sizeof(x[0]);
	
	if (n==size){
		printf("khong the them vao mang !");
	}
	x[n]=m;
	n++;	
}
void themVaoDau(int x[100],int &n,int m ){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("khong the them vao mang !");
	}
	n++;
	for(int i=n-1;i>0;i--){
		x[i]=x[i-1];
	}
	x[0]=m;
	
	
}
void themVaoK(int x[100],int &n ,int m, int k){
	
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("khong the them vao mang !");
	}
	n++;
	for(int i=n-1;i>k;i--){
		x[i]=x[i-1];
	}
	x[k]=m;
	
	
}
int main(){
	char gt;
	do{
		printf("\n----------\nMENU (chon ham muon xu li)\n");
		printf("\n1-Nhap mang");
		printf("\n2-Xuat mang");
		printf("\n3-Them phan tu vao cuoi mang ");
		printf("\n4-Them phan tu vao dau mang ");
		printf("\n5-Them phan tu vao vi tri k ");
		printf("\nx- Thoat");
		printf("\nLua chon cua ban la :");
		scanf(" %c",&gt);
		
		if(gt =='1'){
			nhapMang(a,n);
		}else if (gt =='2'){
			xuatMang(a,n);
		}else if (gt =='3'|| gt=='4'|| gt =='5'){
			int m ;
			printf("\nNhap vao gia tri m =");
			scanf("%d",&m);
			if (gt=='3'){
				themVaoCuoi(a,n,m);
			}else if (gt =='4'){
				themVaoDau(a,n,m);
			}else if (gt =='5'){
				int k;
				printf("\nNhap vao gia tri cua k:");
				scanf("%d",&k);
				themVaoK(a,n,m,k);
			}
			
		}
		
		
	}while(gt != 'x');
}













