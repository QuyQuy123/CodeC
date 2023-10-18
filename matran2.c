#include <stdio.h>
#include <stdlib.h>


int main() {
	int m =3,n =4;
	// cap phat bo nho cho mang 2 chieu
	int **arr = (int**)malloc(m*sizeof(int*));
	for(int i=0; i<m;i++) {
		arr[i] = (int*)malloc(n*sizeof(int));
	}

	// cach 1:
	//
	int temp[][4] = {
		{1,2,3,4},
		{5,6,7,18},
		{9,8,10,16}

	};
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			arr[i][j] = temp[i][j];
		}
	}
	// In

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("%4d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	//d
	
	printf("\nCac phan tu nam o cot chan:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if( j % 2 ==0){
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
	}
	//e
	printf("\nCac phan tu co so hang = so cot:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if( i == j){
				printf("%d ",arr[i][j]);
			}
		}
		
	}
	//f
	printf("\nTong cac phan tu trong mang:\n");
	int tong =0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			tong = tong + arr[i][j];
		}		
	}
	printf("%d",tong);
	
	
	
	
	for(int i=0;i<m;i++) free(arr[i]);
	free(arr);
	return 0;
}









