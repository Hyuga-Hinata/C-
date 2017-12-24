#include<stdio.h>
#include<string.h>
int main(void)
{
	char N[40],M[40];
	int size1,size2;
	printf("Please print your last name:\n");
	scanf("%s",N);
	printf("OK?Now!Please print your first name:\n");
	scanf("%s",M);
	printf("Wow!So your name is:\n\t%-8s \r%-8s\n",N,M);
	size1=strlen(N); 
	size2=strlen(M);
	printf("\t%-8d \r%-8d",size1,size2);
	return 0;
 } 
