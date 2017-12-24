#include<stdio.h>
void butler(void);
int main(void) 
{
	int num;
	num=17;
	
	printf("我已经活了%d年\n",num) ;
	printf("我已经活了"); 
	butler(); 
	printf("天"); 
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
