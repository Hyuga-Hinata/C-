#include<stdio.h>
#include<stdlib.h>  //为了使用exit() 
int main( )
{
	int ch;
	FILE*fp;
	char fname[50];   //用于存放文件名
	
	printf("Enter the name of the file:");
	scanf("%s",fname);
	fp=fopen(fname,"r");   //打开文件以供读取
	if(fp==NULL)           //尝试打开文件失败
	{
		printf("Failed to open file.Bye\n");
		exit(1);        //终止程序 
	 }  //getc(fp)从打开的文件中获取一个字符
	   while((ch=getc(fp))!=EOF)
	       putchar(ch);
		fclose(fp);    //关闭字符
		return 0; 
 } 
