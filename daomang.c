#include "stdio.h"
#include "string.h"
/*
int main(){
	int n;
	int a[100];
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\na[%d] =",i);
		scanf("%d",&a[i]);
	}
	printf("\nGia tri phan tu cua mang:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nDao nguoc mang:");
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
*/

int main() {
	char name[100];
	char temp[100];
	printf("Nhap vao ten cua ban:");
	fgets(name,sizeof(name),stdin);
	if(name[strlen(name)-1]== '\n') {
		name[strlen(name)-1] = '\0';
	}
	printf("\nTen cua ban la:%s",name);
	printf("\nDo dai ten cua ban la:%d",strlen(name));
	int j=0;
	for(int i=strlen(name)-1; i>=0; i--) {
		temp[j++] = name[i];
	}
	printf("\nTen cua ban sau khi dao nguoc la:%s",temp);
	
	return 0;
}




























