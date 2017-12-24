#include<stdio.h>
int main(void)
{
	char s[255];
	scanf("%s",s);
	int i=0;
	for(i<0;i<255;i++)
	 {
	 	if(s[i]=='\0')
	 	break;
	 }
	 for(int j=i-1;j>=0;j--)
	 {
	 	printf("%c",s[j]);
	 }
	 return 0;
 } 
