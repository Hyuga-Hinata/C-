#include<stdio.h>
int main(void)
{
	int n=0;
	size_t intsize;
	intsize=sizeof(int);   //有些电脑用不了%zd，而用%u或者%lu代替 
	printf("n=%d,n has %u bytes:all ints have %u bytes.\n",
	n,sizeof n,intsize);  //类型如int需要被（）起来，而n不需要 
	return 0;
 } 
