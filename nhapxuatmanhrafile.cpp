#include "stdio.h"
#include "stdlib.h"


void nhapMang(int x[], int &n) {
	do {
		printf("Nhap vao n :");
		scanf("%d", &n);
	} while(n<=0);

	for(int i =0; i<n; i++) {
		printf("\nx[%d] =",i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[], int n) {
	printf("\nMang vua nhap la :");
	for(int i =0; i<n; i++) {
		printf("\n%d", x[i]);
	}
}
void xuatFile(int x[], int n, char tenFILE[50]) {
	FILE *f;
	f = fopen(tenFILE, "w");
	if(f==NULL) {
		printf("\nloi chg trinh");
		return;
	}

	fprintf(f, "%d\n",n);
	for(int i=0; i<n; i++) {
		fprintf(f, "%d\n",x[i]);

	}
	fclose(f);


}
void xuatFile2(int x[], int n, char tenFILE[50]) {
	FILE *f;
	f = fopen(tenFILE, "w");
	if(f==NULL) {
		printf("\nloi chg trinh");
		return;
	}

	//fprintf(f, "%d\n",n);
	for(int i=0; i<n; i++) {
		fprintf(f, "%d\n",x[i]);

	}
	fclose(f);


}
int main() {
	int a[100];
	int n;
	nhapMang(a,n);
	xuatMang(a,n);
	xuatFile(a,n,"baixuat.out");
	xuatFile2(a,n,"baixuat2.out");
}



















