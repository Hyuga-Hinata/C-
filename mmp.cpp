#include<stdio.h>
int main(void)
{
	char hz[40];
	char mmp[40];
	printf("你们玩的什么游戏？\n");
	scanf("%s",&hz);
	printf("你们在\"%s\"这个游戏里面的会长叫什么？\n",hz);
	scanf("%s",&mmp);
	printf("所以\"%s\"是一个见色忘义，最先退游，扰乱军心的人！",mmp);
	return 0; 
 } 
