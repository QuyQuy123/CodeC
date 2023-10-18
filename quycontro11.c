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
	printf("\nCac phan tu cua mang:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
	free(a);
	return 0;
	
}






