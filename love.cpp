#include<string.h>
#include<conio.h>
char a[10];
int top=-1,i;
void error() {
	printf("Syntax Error");
}
void push(char k[]) {
	for(i=0; k[i]!='\0'; i++) {
		if(top<9)
			a[++top]=k[i];
	}
}
char TOS() {
	return a[top];
}
void pop() {
	if(top>=0)
		a[top--]='\0';
}
void display() {
	for(i=0; i<=top; i++)
		printf("%c",a[i]);
}
void display1(char p[],int m) {
	int l;
	printf("\t");
	for(l=m; p[l]!='\0'; l++)
		printf("%c",p[l]);
}
char* stack() {
	return a;
}
int main() {
	char ip[20],r[20],st,st1,an,ter[10][10],var[10][10];
	int ir,ic,j=0,k,n1,n2,i,flag=0,ch;
	printf("\nEnter the no. of terminals:");
	scanf("%d",&n1);
	printf("\nEnter the no. of variables:");
	scanf("%d",&n2);
	char t[10][n1][n2];
	for(i=0; i<n1; i++) {
		printf("\nEnter the terminals:");
		scanf("%s",ter[i]);
	}
	for(i=0; i<n2; i++) {
		printf("\nEnter the Variables:");
		scanf("%s",var[i]);
	}
	for(i=0; i<n2; i++)
		for(j=0; j<n1; j++) {
			printf("\nEnter the grammar for %s %s:",ter[j],var[i]);
			scanf("%s",t[i][j]);
			//printf("%s",t[i][j]);
			//printf("%s",t[i][j-1]);
		}
	//strcpy(t[3][5],"e");
	//strcpy(t[4][0],"i");
	for(i=0; i<n2; i++) {
		for(j=0; j<n1; j++)
			printf("%s  ",t[i][j]);
		printf("\n");
	}
A:
	printf("\nEnter any String(Append with $)");
	scanf("%s",ip);
	printf("Stack\tInput\tOutput\n\n");
	push("$E");
	display();
	printf("\t%s\n",ip);
	for(j=0; ip[j]!='\0';) {
		if(TOS()==an) {
			pop();
			display();
			display1(ip,j+1);
			printf("\tPOP\n");
			j++;
		}
		an=ip[j];
		st=TOS();
		if(st=='E')ir=0;
		else if(st=='H')ir=1;
		else if(st=='T')ir=2;
		else if(st=='U')ir=3;
		else if(st=='F')ir=4;
		else {
			error();
			break;
		}
		if((an>='a'&&an<='z')||(an>='A'&&an<='Z')) {
			ic=0;;
			an='i';
		} else if(an=='+')ic=1;
		else if(an=='*')ic=2;
		else if(an=='(')ic=3;
		else if(an==')')ic=4;
		else if(an=='$')ic=5;
		//printf("\n%d%d",ir,ic);
		strcpy(r,strrev(t[ir][ic]));
		strrev(t[ir][ic]);
		pop();
		push(r);
		if(TOS()=='e') {
			pop();
			display();
			display1(ip,j);
			printf("\t%c->%c\n",st,238);
		} else {
			display();
			display1(ip,j);
			printf("\t%c->%s\n",st,t[ir][ic]);
		}
		if(TOS()=='$'&&an=='$')
			break;
		if(TOS()=='$') {
			error();
			break;
		}
	}
	k=strcmp(stack(),"$");
	if(k==0)
		printf("\n Given String is accepted");
	else
		printf("\n Given String is not accepted");
	printf("\nDo you like to continue(1/0)?");
	scanf("%d",&ch);
	if(ch==1) {
		top=-1;
		goto A;
	}
	return 0;
}