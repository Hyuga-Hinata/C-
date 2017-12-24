#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void main()
{
	char a[100000];
	int l,i,j;
	scanf("%s",a);
	l=strlen(a);
	j=l-1;
	while(a[j]=='9')
	{
		j-=1;
	}
	for(i=j+1;i<=l-1;i+=1)
	{
		a[i]='0';
	}
	if (j==-1)
	{
		a[0]='1';
		a[l]='0';
		a[l+1]=0;
	}
	else
	{
		a[j]+=1;
	}
	printf("%s",a);
}
