#include<stdio.h>
void put1(const char *string)  //常量
{
	while(*string != '\0')
	     putchar(*string++);
 }
 
 int i = 0;
 while(string[i]!='\0')//等同于while(*string) 
    putchar(string[i++]);
