#include<stdio.h>
#include<string.h>
#define SIZE 81    //字符串长度限制，包括\0 
#define LIM 20     //最多读取的行数 
#define HALT " "   //用空字符终止输入
void stsrt(char *strings[],int num);  //字符串排序函数

 int main(void)
 {
 	char input[LIM][SIZE];   //储存输入的数组
	char *ptstr[LIM];        //指针变量的数组 
	int ct = 0;             //输入计数
	int k;                //输出计数
	
	printf("Input up to %d lines,a and I will sort them.\n",LIM);
	printf("To stop,press the Enter key at a line's start.\n");
	while(ct<LIM&&gets(input[ct])!=NULL&&input[ct][0] != '\0')
	{
		ptstr[ct]=input[ct];  //令指针指向输入字符串 
		ct++;
	 } 
	 stsrt(ptstr,ct);
	 puts("\nHere's the sorted list: \n");
	 for(k = 0;k<ct;k++)
	    puts(ptstr[k]);
		
	return 0; 
  } 
  
  void stsrt(char *strings[],int num)
  {
  	char *temp;
  	int top,seek;
  	
  	for(top=0;top<num-1;top++)
  	   for(seek=top+1;seek<num;seek++)
  	       if(strcmp(strings[top],strings[seek])>0)
  	       {
  	       	temp=strings[top];
  	       	strings[top]=strings[seek];
  	       	strings[seek]=temp;
			}
	return ;
  }
