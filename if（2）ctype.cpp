#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	
	while((ch=getchar())!='\n')
	{
		if(isalpha(ch))//是字母则返回非零值 
		    putchar(ch+1);
		else
		    putchar(ch); 
	}
	putchar(ch);
	return 0;
 } 
