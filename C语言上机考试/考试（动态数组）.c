//һά���� 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1,i;
	int *array;
	printf("��������Ҫ������һά��̬����ĳ��ȣ�");
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
 	free(array);//�ͷŵ�һάָ�� 
 	
	return 0;
}

//��ά����
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int n1,n2; 
	int **array,i,j;
	printf("��������Ҫ�����Ķ�̬����ĵ�һά���ȣ�");
	scanf("%d",&n1);
	printf("��������Ҫ�����Ķ�̬����ĵڶ�ά���ȣ�");
	scanf("%d",&n2);
	array=(int**)malloc(n1*sizeof(int*)); //��һά 
	for(i=0;i<n1; i++) 
	{ 
		array[i]=(int*)malloc(n2* sizeof(int));//�ڶ�ά 
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
		free(array[i]);//�ͷŵڶ�άָ�� 
	} 
	free(array);//�ͷŵ�һάָ�� 
	
	return 0; 
} 

//��ά����
#include <stdlib.h> 
#include <stdio.h> 
int main() 
{ 
	int n1,n2,n3; 
	int ***array; 
	int i,j,k; 
	printf("��������Ҫ�����Ķ�̬����ĵ�һά���ȣ�");
	scanf("%d",&n1); 
	printf("��������Ҫ�����Ķ�̬����ĵڶ�ά���ȣ�");
	scanf("%d",&n2); 
	printf("��������Ҫ�����Ķ�̬����ĵ���ά���ȣ�");
	scanf("%d",&n3); 
	array=(int***)malloc(n1*sizeof(int**));//��һά 
	for(i=0; i<n1; i++) 
	{ 
		array[i]=(int**)malloc(n2*sizeof(int*)); //�ڶ�ά 
		for(j=0;j<n2;j++) 
		{ 
			array[i][j]=(int*)malloc(n3*sizeof(int)); //����ά 
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
			free(array[i][j]);//�ͷŵ���άָ�� 
		} 
	} 
	for(i=0;i<n1;i++) 
	{ 
		free(array[i]);//�ͷŵڶ�άָ�� 
	} 
	free(array);//�ͷŵ�һάָ�� 
	
	return 0; 
} 
