#include<stdio.h>
#include<string.h>
#define Max 1001
int add(char a[],char b[],char c[],int k);

int main()
{
    char a[Max]={0},b[Max]={0},c[Max];
	int n,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%s %s",&a,&b);
    	printf("Case %d:\n",i+1);
    	k=add(a,b,c,Max);
    	while(k<Max)
    	printf("%d",c[k++]);
    	printf("\n");
    	if(i < n)
    	printf("\n");
	}
	
	return 0;
}

int add(char a[],char b[],char c[],int k)
{
	int A=strlen(a)-1;
	int B=strlen(b)-1;
	int i;
	for (i=0; i<Max; i++)
        c[i] = 0;
	while(A>=0&&B>=0)
	{
		c[--k] += a[A--]+b[B--]-'0'-'0';
		if(c[k]>=10)
		{
			c[k-1] = 1;
			c[k] = c[k] - 10;
		}
	}
	while(A>=0)
	{
		c[--k] += a[A--]-'0';
		if(c[k]>=10)
		{
			c[k-1] = 1;
			c[k] = c[k] - 10;
		}
	}
	while(B>=0)
	{
		c[--k] += b[B--] - '0';
		if(c[k]>=10)
		{
			c[k-1] = 1;
			c[k] = c[k] - 10;
		}
	}
	if(c[k-1]>0)
	k--;
	
	return k;
}
