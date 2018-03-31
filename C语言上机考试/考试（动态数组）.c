//一维数组 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1,i;
	int *array;
	printf("请输入所要创建的一维动态数组的长度：");
	scanf("%d",&n1);
	array=(int*)calloc(n1,sizeof(int));
	for(i=0;i<n1;i++)
	{
 		printf("%d\t",array[i]);
	}
	printf("\n");
	for(i=0;i<n1;i++)
	{
 		array[i]=i+1;
 		printf("%d\t",array[i]);
	}
 	free(array);//释放第一维指针 
 	
	return 0;
}

//二维数组
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int n1,n2; 
	int **array,i,j;
	printf("请输入所要创建的动态数组的第一维长度：");
	scanf("%d",&n1);
	printf("请输入所要创建的动态数组的第二维长度：");
	scanf("%d",&n2);
	array=(int**)malloc(n1*sizeof(int*)); //第一维 
	for(i=0;i<n1; i++) 
	{ 
		array[i]=(int*)malloc(n2* sizeof(int));//第二维 
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++) 
		{ 
			array[i][j]=i*n2+j+1; 
			printf("%d\t",array[i][j]); 
		} 
		printf("\n");
	}
	for(i=0;i<n1;i++) 
	{ 
		free(array[i]);//释放第二维指针 
	} 
	free(array);//释放第一维指针 
	
	return 0; 
} 

//三维数组
#include <stdlib.h> 
#include <stdio.h> 
int main() 
{ 
	int n1,n2,n3; 
	int ***array; 
	int i,j,k; 
	printf("请输入所要创建的动态数组的第一维长度：");
	scanf("%d",&n1); 
	printf("请输入所要创建的动态数组的第二维长度：");
	scanf("%d",&n2); 
	printf("请输入所要创建的动态数组的第三维长度：");
	scanf("%d",&n3); 
	array=(int***)malloc(n1*sizeof(int**));//第一维 
	for(i=0; i<n1; i++) 
	{ 
		array[i]=(int**)malloc(n2*sizeof(int*)); //第二维 
		for(j=0;j<n2;j++) 
		{ 
			array[i][j]=(int*)malloc(n3*sizeof(int)); //第三维 
		} 
	} 
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			for(k=0;k<n3;k++) 
			{ 
				array[i][j][k]=i+j+k+1; 
				printf("%d\t",array[i][j][k]); 
			} 
			printf("\n");
		}
		printf("\n");
	}
	for(i=0;i<n1;i++) 
	{ 
		for(j=0;j<n2;j++) 
		{ 
			free(array[i][j]);//释放第三维指针 
		} 
	} 
	for(i=0;i<n1;i++) 
	{ 
		free(array[i]);//释放第二维指针 
	} 
	free(array);//释放第一维指针 
	
	return 0; 
} 
