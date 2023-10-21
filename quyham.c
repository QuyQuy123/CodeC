#include <stdio.h>
#include <string.h>

void nhapMang(char mang[100]){
	printf("Enter the Strings:");
	fgets(mang,sizeof(mang),stdin);
	if(mang[strlen(mang)-1]=='\n') {
		mang[strlen(mang)-1]='\0';
	}
}
void check(char mang[100], char temp[100]){
	int index=0;
	for(int i =strlen(mang)-1; i>=0; i--) {
		temp[index++] = mang[i];
	}
	int value = strcmp(mang,temp);
	if(value ==0) {
		printf("The string is symmetric");
	}else {
		printf("The string is not symmetric");
	}
}
int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char mang[100];
	char temp[100];
	nhapMang(mang);

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	check(mang,temp);

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}