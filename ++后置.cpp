#include<stdio.h>
int main(void)
{
	int count,sum;
	
	count=0;
	sum=0;
	while(count++<20)//从1开始算起
	   sum=sum+count;
	printf("sum=%d\n",sum);//只输出最后的结果 
	
	return 0;   
 } 
