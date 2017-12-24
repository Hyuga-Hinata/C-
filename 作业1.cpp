#include<stdio.h>
int main(void)
{
    int A[3], B[3], C[3];
    int i=0;
    while(i <= 2)
    {
    	scanf("%d %d %d",&A[i], &B[i], &C[i]);
    	i++;
	}
	for(i=0;i<=2;i++)
    {
        if(A[i]>B[i])
        {
            if(C[i]>=A[i])
            printf("A:%d\n",A[i]);
            else if(C[i]>B[i])
            printf("C:%d\n",C[i]);
            else printf("B:%d\n",B[i]);
        }
        else if(A[i]=B[i])
            printf("A:%d\n",A[i]);
        else 
		{
			if(C[i]>=B[i])
            printf("B:%d\n",B[i]);
        	else if(C[i]>A[i])
            	printf("C:%d\n",C[i]);
       		else 
			   	printf("A:%d\n",A[i]);
		}
    }
}
