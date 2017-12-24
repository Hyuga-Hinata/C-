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
	
	if((out=fopen("成绩打印.txt","w+"))==NULL)
	{
		fprintf(stderr,"文本创建失败!");
		exit(1);
	}
	float tot=0;
	int size;
	printf("有多少个学生：\n");
	scanf("%d",&size);
	
	struct member student[size+1];
	for(int i=0;i<size+1;i++)
	student[i].grade=-1;
	printf("输入他的编号，再输入成绩(如1 100):\n");
	printf("编号为零时，我将查找几号没有输入:\n"); 
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
			printf("输入编号有误，重新输入编号\n");
			fflush(stdin);
			n=n-1;
		}
		else if(student[k].grade!=-1)
		{
			printf("已输入该成绩，是否更改:（y修改，n不改）\n");
			char q;
			do{
				fflush(stdin);
				scanf("%c",&q);
				fflush(stdin);
				if(q!='y'&&q!='n')
				printf("请输入 y 或者 n\n"); 
			}while(q!='y'&&q!='n');
			
			if(q=='y')
			{
				printf("请输入成绩:\n");
				scanf("%f",&student[k].grade);
				printf("请继续输入编号和成绩\n");
				n=n-1;
			}
			
			if(q=='n')
			{
				n=n-1;
				printf("请输入编号和成绩\n"); 
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
	fprintf(out,"\n\n平均数:  %.2f\n\n",tot/size);
	if(fclose(out)!=0)
		fprintf(stderr,"文件关闭错误！"); 
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
			printf("%d号没有输入成绩,请在次输入:\n",n);
			scanf("%f",&student[n].grade);
			student[n].number=n;
		}
	}
	return ;
}

void show1(struct member student[],int size)
{
	fprintf(out,"编号     成绩\n");
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
	fprintf(out,"\n\n编号     成绩     排名\n");
	for(int i = 1;i<size+1;i++)
	fprintf(out,"%2d       %.1f      %2d\n",student[i].number,student[i].grade,i);
}
