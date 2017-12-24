#include<stdio.h>
int main(void)
{
	float s=3.156e7;
	float k;
	printf("如果你输入你的年龄：");
	scanf("%f",&k); 
	printf("我将把它换为秒数:%e",k*s);
	return 0;
 } 
