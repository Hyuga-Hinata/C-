#include<stdio.h>
int main(void)             //k[i]ȫ������ָ�� 
{
	int i,START=0,START1=0,LENGTH=0,LENGTH1=0;
	for(i=0;i</*��󳤶ȣ�ǧ����һ��*/;i++)
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
    //STARTΪ��ʼλ�ã�LENGTHΪ��󼸸�����,�ǵø�ָ�븳ֵ��Ӧ�þ���Щ�� 
	printf("%d\t%d",START,LENGTH);
}
