#include<stdio.h>
#include<stdlib.h>
int sort(char * );
int main(void)
{
	char alphabet[36];
	scanf("%s",alphabet);
	printf("%d",sort(alphabet));
	
	return 0;
}

int sort(char * a)
{
	int i,n=1,N=1;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i+1]>=a[i])
		{
			n++;
		}
		if(n>N)
		N=n;
		if(a[i+1]<a[i])
		{
			n=1;
		}
		
	}
	
	return N;
}
