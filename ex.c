#include <stdio.h>

void nhapMang(int a[100], int *n){
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[100], int n){
	printf("\nCac gia tri cua mang:");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void countsl(int a[100], int n, int y[100], int *m) {
    for (int i = 0; i < n; i++) {
        int count = 1; // Initialize count to 1 for each element
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        y[i] = count;
    }

    printf("\nSo lan xuat hien cua cac so:");
    for (int i = 0; i < n; i++) {
        printf("%d ", y[i]);
    }

    // Calculate the count of distinct numbers
    *m = n;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                (*m)--;
                break;
            }
        }
    }
}

int main(){
	int a[100];
	int y[100];
	int n,m;
	nhapMang(a,&n);
	xuatMang(a,n);
	countsl(a,n,y,&m);
	
	return 0;
	
}













