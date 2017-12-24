#include<stdio.h>
#include<stdlib.h>
FILE * out; 
struct member{
	int number;
	float grade;
};
void check(struct member student[],int size);
void show1(struct member student[],int size);
void sort(struct member student[],int size);
void show2(struct member student[],int size);
int main(void)
{
	
	if((out=fopen("�ɼ���ӡ.txt","w+"))==NULL)
	{
		fprintf(stderr,"�ı�����ʧ��!");
		exit(1);
	}
	float tot=0;
	int size;
	printf("�ж��ٸ�ѧ����\n");
	scanf("%d",&size);
	
	struct member student[size+1];
	for(int i=0;i<size+1;i++)
	student[i].grade=-1;
	printf("�������ı�ţ�������ɼ�(��1 100):\n");
	printf("���Ϊ��ʱ���ҽ����Ҽ���û������:\n"); 
	for(int n = 1; n<size+1;n++)
	{
		int k;
		scanf("%d",&k);
		if(k==0)
		{
			check(student,size);
			break;
		}
		
		if(k<0||k>size)
		{
			printf("��������������������\n");
			fflush(stdin);
			n=n-1;
		}
		else if(student[k].grade!=-1)
		{
			printf("������óɼ����Ƿ����:��y�޸ģ�n���ģ�\n");
			char q;
			do{
				fflush(stdin);
				scanf("%c",&q);
				fflush(stdin);
				if(q!='y'&&q!='n')
				printf("������ y ���� n\n"); 
			}while(q!='y'&&q!='n');
			
			if(q=='y')
			{
				printf("������ɼ�:\n");
				scanf("%f",&student[k].grade);
				printf("����������źͳɼ�\n");
				n=n-1;
			}
			
			if(q=='n')
			{
				n=n-1;
				printf("�������źͳɼ�\n"); 
			}
		}
		else
		{
			scanf("%f",&student[k].grade);
			student[k].number=k;
		}
	}
	for(int i =1;i<=size;i++)
		tot+=student[i].grade;
	show1(student,size);
	sort(student,size);
	show2(student,size);
	fprintf(out,"\n\nƽ����:  %.2f\n\n",tot/size);
	if(fclose(out)!=0)
		fprintf(stderr,"�ļ��رմ���"); 
	fflush(stdin);
	return 0;
}

void check(struct member student[],int size)
{
	for(int n =1;n<size+1;n++)
	{
		int k;
		if(student[n].grade==-1)
		{
			printf("%d��û������ɼ�,���ڴ�����:\n",n);
			scanf("%f",&student[n].grade);
			student[n].number=n;
		}
	}
	return ;
}

void show1(struct member student[],int size)
{
	fprintf(out,"���     �ɼ�\n");
	for(int i = 1;i<size+1;i++)
	fprintf(out,"%2d       %.1f\n",student[i].number,student[i].grade);
	return ;
}

void sort(struct member student[],int size)
{
	int i,j;
	struct member temp;
	for(i=1;i<size;i++)
	{
		for(j=1;j<size-i+1;j++)
		{
			if(student[j].grade<student[j+1].grade)
			{
				temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
			}
		}
	}
	return ;
}

void show2(struct member student[],int size)
{
	fprintf(out,"\n\n���     �ɼ�     ����\n");
	for(int i = 1;i<size+1;i++)
	fprintf(out,"%2d       %.1f      %2d\n",student[i].number,student[i].grade,i);
}
