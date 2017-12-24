#include<stdio.h>
int main(void)             //k[i]全部换成指针 
{
	int i,START=0,START1=0,LENGTH=0,LENGTH1=0;
	for(i=0;i</*最大长度（千万别减一）*/;i++)
	{
		if(k[i]<k[i+1])
		   {
		   	LENGTH1++;
		   	if(LENGTH1>LENGTH)
		      {
		        START=START1;
		        LENGTH=LENGTH1;
		      } 
		   }
		else
		   {
		   	START1=i+1;
		   	LENGTH1=0;
		   }
	}
    //START为开始位置，LENGTH为向后几个数字,记得给指针赋值，应该就这些了 
	printf("%d\t%d",START,LENGTH);
}
