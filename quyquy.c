#include "stdio.h"
#include "stdlib.h"


void nhapMang(int a[], int &n) {
    printf("Nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\na[%d] =", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n%d", a[i]);
    }
}

void noiMang(int a1[], int n1, int a2[], int n2, int Mangnoi[]) {
    for (int i = 0; i < n1; i++) {
        Mangnoi[i] = a1[i];
    }
    for (int i = 0; i < n2; i++) {
        Mangnoi[n1 + i] = a2[i];
        
    }
}

int main() {
    int a1[100];
    int a2[100];

    int n1, n2;
    nhapMang(a1, n1); 
    nhapMang(a2, n2); 
    printf("\n");
    
    xuatMang(a1, n1);
    xuatMang(a2, n2);

    int n3 = n1 + n2;
    int Mangnoi[n3];
    noiMang(a1, n1, a2, n2, Mangnoi);
    printf("\nMang sau khi noi:");
    xuatMang(Mangnoi, n3);
    
    for(int i=0;i<n3;i++){
    	printf("%d ",Mangnoi[i]);
	}

    return 0;
}
