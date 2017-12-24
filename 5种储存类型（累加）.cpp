#include<stdio.h>

void report_count();
void accumulate(int k);
int count = 0;
int main(void)
{
	int value;
	register int i;   //�Ĵ������� 
	
	printf("Enter a positive integer (0 to quit): ");
	while(scanf("%d",&value)==1&&value>0)
	{
		++count;
		for(i = value;i>=0;i--)
		   accumulate(i);
		printf("Enter a positive integer(0 to quit): ");
	}
	report_count();
	return 0;
}

void report_count()
{
	printf("Loop executed %d times\n",count);
}



#include<stdio.h>

extern int count;

static int total = 0;
void accumulate(int k);   //ԭ�� 
void accumulate(int k)   //k���д���������򣬿����� 
{
	static int subtotal = 0;
	
	if(k <= 0)
	{
		printf("loop cycle:%d\n",count);
		printf("subtotal: %d;total: %d\n",subtotal,total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	};
 } 
