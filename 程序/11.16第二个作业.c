#include<stdio.h>
void insertion_sort(int a[], int len);
int main(void)
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int first[m],second[n];
	for(i=0;i<m;i++)
	scanf("%d",&first[i]);
	for(i=0;i<n;i++)
	scanf("%d",&second[i]);
	int last[m+n];
	for(i=0;i<m;i++)
	last[i] =  first[i];
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			if(last[i]==second[j])
			break;
		}
		if(i==m)
		{
			m++;
			last[m-1]=second[j];
		}
	}
	insertion_sort(last, m);
	for(i=0;i<m;i++)
	printf("%d  ",last[i]);
}

void insertion_sort(int a[], int len) 
{
  	int i,j,temp; 
	for(i=1;i<len;i++)
	{
	 	temp=a[i];
		for(j=i-1;j>=0&&a[j]>temp;j--)
	   		a[j+1]=a[j];
	   	a[j+1]=temp;	
	}
}
