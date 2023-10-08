#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void input(double a[], int *n) {
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("\na[%d] = ",i);
		scanf("%ld",&a[i]);
	}
}
void display(double a[], int n) {
	printf("\nCac gia tri cua mang:");
	for(int i=0;i<n;i++){
		printf("%ld ",a[i]);
	}
}

int search(double a[],int n, double x) {
	for(int i=0;i<n;i++){
		if(a[i] != x){
			return -1;
		}else{
			printf("%d",i);
			return 1;
		}
	}
	

}

void dele(double a[], int *n, int k) {
	for(int i=0;i<*n;i++){
		if(i==k){
			a[i]==a[i+1];
		}
	}
}

void dele2(double a[], int *n, double x) {// n = &a
	for(int i=0;i<n;i++){
		if(a[i]==x){
			a[i] =a[i+1];
		}
	}
}
//	int maxPos(double a[], int n) {

	//}	
void sort(double a[], int n) {
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] >a[j]){
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

}
int main() {
	system("cls");
	double a[100];
	int n, k;
	double x;
	int choice;
	while(1) {
		printf("\n");
		printf("1. Input data\n");
		printf("2. Display\n");
		printf("3. Search\n");
		printf("4. Delete position\n");
		printf("5. Delete value\n");
		printf("6. Sort data\n");
		printf("0. Exit\n");
		printf("Enter your selection (0 -> 6): ");
		scanf("%d",&choice);
		if(choice==0) break;
		switch(choice) {
			case 1:
				input(a,n);
				break;
			case 2:
				display(a,n);
				break;
			case 3:
				printf("Enter a value to be searched x = ");
				scanf("%lf",&x);
				k = search(a,n,x);
				if(k==-1)
					printf("Not found\n");
				else
					printf("Found at position %d\n",k);
				break;
			case 4:
				printf("Enter a position to be deleted k = ");
				scanf("%d",&k);
				dele(a,n,k);
				break;
			case 5:
				printf("Enter a value to be deleted x = ");
				scanf("%lf",&x);
				dele2(a,n,x);
				break;
			case 6:
				sort(a,n);
				break;
			default:
				printf("Your selection is incorrect\n");
				break;

		}
	}
	printf("\n");
	system("pause");
	return(0);
}