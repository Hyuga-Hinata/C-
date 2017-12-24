#include<stdio.h>
int main(void)
{
	int num=5;
	while(num<21)
	{
		printf("%10d %10d\n",num,num*num++);
	}
	printf("Over!");
	return 0;

	
 } 
