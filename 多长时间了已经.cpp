#include<stdio.h>
void butler(void);
int main(void) 
{
	int num;
	num=17;
	
	printf("���Ѿ�����%d��\n",num) ;
	printf("���Ѿ�����"); 
	butler(); 
	printf("��"); 
	return 0;
}
void butler(void)
{
	int y,m,k;
	y=17;
	m=12*y;
	k=30*m;
	printf("%d",k);
	
	
}
