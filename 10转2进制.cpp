#include<stdio.h> 
int main(void)
{
	int k,a,b,p=0;
	char num[100]; 
	printf("���������ʮ��������");
	scanf("%d",&k); 
	for(;k>0;k=a)
	{
		a=k/2;b=k%2;
		num[p]=b;
		p++;
	}
	printf("�������Ҫ���ǣ�"); 
    while(p>0)
    {
	     printf("%d",num[p-1]);
	     p--;
	}
	return 0; 
}
