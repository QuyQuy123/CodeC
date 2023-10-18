#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	
	char malop[6][6]= {"A101","A102","A103","A104","A105","A106"};
	char mahocsinh[6][7]= {"Q101","A102","C103","T104","B105","L106"};
	int prf[6] = {1,2,3,10,5,6};
	int pro[6] = {6,7,8,9,3,10};
	int csd[6] = {2,3,4,5,6,7};

	int index ;

	printf("malop\tmahocsinh\tprf\tpro\tcsd\n");
	for(int i=0; i<6; i++) {
		for(int j=0; j<6; j++) {
			if (strcmp(mahocsinh[j], mahocsinh[j + 1]) > 0) {
				char temp[7];
				strcpy(temp, mahocsinh[j]);
				strcpy(mahocsinh[j], mahocsinh[j + 1]);
				strcpy(mahocsinh[j + 1], temp);

				// Swap corresponding elements in other arrays
				int tempInt = prf[j];
				prf[j] = prf[j + 1];
				prf[j + 1] = tempInt;

				tempInt = pro[j];
				pro[j] = pro[j + 1];
				pro[j + 1] = tempInt;

				tempInt = csd[j];
				csd[j] = csd[j + 1];
				csd[j + 1] = tempInt;

				strcpy(temp, malop[j]);
				strcpy(malop[j], malop[j + 1]);
				strcpy(malop[j + 1], temp);
			}
		}
	}



for(int i=0; i<6; i++) {
	index = i;
	printf("%s\t%6s\t%10d\t%10d\t%5d\t", malop[index],mahocsinh[index],prf[index],pro[index], csd[index]);
	printf("\n");
}


return 0;


}






