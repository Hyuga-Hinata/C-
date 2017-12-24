#include<stdio.h>
#define SPACE ' '/*ÒýÈë¿Õ¸ñ*/ 
int main(void)
{
	char ch;
	
	ch=getchar();
	while(ch!='\n')     //while(
	{                   //     (ch=getchar())
		if(ch==SPACE)   //              !='\n')
		  putchar(ch);
		else
		  putchar(ch+1);
		ch=getchar();   //while((ch=getchar())!='\n') 
	}                   
	putchar(ch);
	return 0;
}
 
