#include <stdio.h>

int main(){
	int *a, n;
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",&n);	
	a = (int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("\nCac so chan trong mang:");
	for(int i=0;i<n;i++){
		if(a[i] % 2==0){
			printf("%d ",a[i]);
		}
	}
	printf("\nCac so le trong mang:");
	for(int i=0;i<n;i++){
		if(a[i] % 2!=0){
			printf("%d ",a[i]);
		}
	}
	free(a);
	return 0;
	
}






