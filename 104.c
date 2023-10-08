#include <stdio.h>

void inputArray(int arr[], int size){
	printf("size of array:%d",size);
	for(int i=0;i<size;i++){
		printf("\na[%d]=",i);
		scanf("%d",&arr[i]);
	}
}

void selectSort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		int minIndex = i;
		for(int j=i+1;j<size;j++){
			if(arr[j] < arr[i]){
				minIndex = j;

			}
		}
		if(minIndex != i){
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp ;
			
		}
	}
}
int main() {
	int choice, size;
	printf("Enter the size of the integer array: ");
	scanf("%d", &size);
	int arr[size];
	do {
		printf("\nMenu:\n");
		printf("1. Import an integer array\n");
		printf("2. Perform Selection Sort\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				inputArray(arr, size);
				break;
			case 2:
				if(size ==0) {
					printf("\nArray is empty !! Let import an array");
				} else {
					selectSort(arr,size);
					printf("\nArray after sorting:");
					for(int i=0; i<size; i++) {
						printf("%d ",arr[i]);
					}
					printf("\n");
				}
			case 3:
				printf("\nExiting the program");
				break;
			default:
				printf("\nInvalid choice.Please enter again");
		}
	} while (choice !=3);
	return 0;
}
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
		
		