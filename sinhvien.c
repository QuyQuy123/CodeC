#include <stdio.h>
#include <stdlib.h>


int main() {
	char classId[6][6] = {"A101","B202","C303","D404","E505","F606"};
	char studentId[6][7] = {"S001","S002","S003","S004","S005","S006"};

	int prf[6] = {1,2,3,4,5,6};
	int pro[6] = {5,6,7,8,9,10};
	int csd[6] = {1,3,5,7,9,10};

	int maxprf = prf[0];
	int index =-1;
	for(int i=0; i<6; i++) {
		if(prf[i] > maxprf)	{
			maxprf = prf[i];
		}
		index =i;
	}
	/*
	printf("ID:%d",index+1);
	printf("\tClassId :%s",classId[index]);
	printf("\tstudentId :%s",studentId[index]);
	printf("\tDiem PRF :%d",prf[index]);
	printf("\tDiem PRO :%d",pro[index]);
	printf("\tDiem CSD :%d",csd[index]);
	*/
	printf("ID\tClass ID\tstudentID\tPRF\t\PRO192\tCSD191\n");
	if(index != -1){
		printf("%d\t%s\t%15s\t%10d\t%5d\t%5d\t",index+1 , classId[index], studentId[index],prf[index],pro[index], csd[index]);
	}else{
		printf("\nNOT Found!!");
	}
	
	return 0;
}





