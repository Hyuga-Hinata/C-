#include<stdio.h>
#include<Stdlib.h>    // ����exit()
#include<string.h>   //����strcpy()��strcat()
#define LEN 40
int main(int argc,char *argv[])
{
	FILE *in ,* out;
	int ch;
	char name[LEN];
	int count = 0;
//��������в���	
	if(argc < 2)
	{
		fprintf(stderr,"Usage : %s filename\n",argv[0]);
		exit(1);
	}
//ʵ������	
	if((in = fopen(argv[1],"r"))== NULL)
	{
		fprintf(stderr,"I couldn't open the file\"%s\"\n",argv[1]);
		exit(2);
	}
//ʵ�����	
	strcpy(name,argv[1]);  // ���ļ������Ƶ������� 
	strcat(name,".red");   // ���ļ��������.red
	if((out = fopen(name,"w"))==NULL)
	{
		fprintf(stderr,"Can't create output file.\n");
		exit(3);
	 } 
// ��������	 
	 while((ch=getc(in))!=EOF)
	   if(count++ % 3==0)
	      putc(ch,out);  // ��ӡÿ3���ַ��е�1��
//��β����
    if(fclose(in)!=0||fclose(out)!=0)
	   fprintf(stderr,"Error in closing files\n");
	 return 0; 
 } 
