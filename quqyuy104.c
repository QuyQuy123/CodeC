#include <stdio.h>
#include <string.h>

int main(){
	/*
	// c1
	char firstName[50];
	char lastName[50];
	
	printf("Enter your firstName:");
	scanf("%s",firstName);
	
	printf("Enter your lastName:");
	scanf("%s",lastName);
	
	printf("\nFirstName:%s",firstName);
	printf("\nLastName:%s",lastName);
	
	return 0;
	
	//c2
	
	char firstName[50];
    char lastName[50];
    int c;
    int fnIndex = 0;
    int lnIndex = 0;
    int fnDone = 0;

    printf("Enter your first and last name: ");

    while ((c = getchar()) != '\n') {
        if (c == ' ' && !fnDone) {
            firstName[fnIndex] = '\0';
            fnDone = 1;  
            lnIndex = 0;      
        } else if (!fnDone) {
            firstName[fnIndex++] = c;
        } else {
            lastName[lnIndex++] = c;
        }
    }

    lastName[lnIndex] = '\0';

    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);
    
    
    
    // c3
    
    char intString[100];
    int c ;
    int index =0;
    while(( c = getchar())!= '\n' && index <sizeof(intString)-1){
    	intString[index++] =c;
	}
	intString[index] = '\0';
	
	printf("\nString is:%s",intString);
	*/
	// c4
	
	char inputString[100];
	printf("Enter a string:");
	fgets(inputString,sizeof(inputString),stdin);
	if(inputString[strlen(inputString)-1] == '\n'){
		inputString[strlen(inputString)-1]= '\0';
	}
	printf("\nYour String: %s",inputString);
	
	
	
	

    return 0;
}
	
	


















