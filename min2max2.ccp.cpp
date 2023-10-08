#include "stdio.h"
#include "limits.h"

int a[100];
int n ;

void nhapMang(int x[100], int &n){
	printf("nhap vao so luong phan tu cua mang :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nx[%d] = ",i);
		scanf("%d",&x[i]);
	}
}

void xuatMang(int x[100], int n ){
	printf("gia tri cua mang la :");
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}

int min2(int x[100], int n){
	int min =INT_MAX;
	int min_2 = INT_MAX;
	for(int i=0;i<n;i++){
		if(x[i]<min)
			min = x[i];
	}
	for(int i=0;i<n;i++){
		if(x[i]==min){
			continue;
		}else{
			if(x[i]<min_2)
				min_2=x[i];
		}
	}
	return min_2;
	
	
}

int max2(int x[100],int n){
	int max =INT_MIN;
	int max_2 = INT_MIN;
	for(int i=0;i<n;i++){
		if(x[i]>max)
			max = x[i];
	}
	for(int i=0;i<n;i++){
		if(x[i]==max){
			continue;
		}else{
			if(x[i]>max_2)
				max_2=x[i];
		}
	}
	return max_2;
}

int main(){
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\nMin_2 =%d",min2(a,n));
	printf("\nMax_2 =%d",max2(a,n));
}









