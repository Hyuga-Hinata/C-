#include<stdio.h>
int main(void)
{
	int LENGTH=1,NUM,i=0,n=0;
    int k[20]={1,2,2,1,4,5,6,3,4,4,5,6,9,8,7,4,5,6,7,-1};
    int t[20];
    NUM=k[0];
    for(i=0;k[i]!=-1;i++)
    {
    	if(k[i]==k[i+1])
        {
        	LENGTH++;
		}
		else
		{
			t[n]=LENGTH;
			t[n+1]=k[i];
			n+=2;
			LENGTH=1;
			
		}
	}
	t[n]='\0';
	for(i=0;t[i]!='\0';i+=2)
	       printf("%d %d  ",t[i],t[i+1]);
	return 0;
}
