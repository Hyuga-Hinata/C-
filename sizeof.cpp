#include<stdio.h>
int main(void)
{
	int n=0;
	size_t intsize;
	intsize=sizeof(int);   //��Щ�����ò���%zd������%u����%lu���� 
	printf("n=%d,n has %u bytes:all ints have %u bytes.\n",
	n,sizeof n,intsize);  //������int��Ҫ��������������n����Ҫ 
	return 0;
 } 
