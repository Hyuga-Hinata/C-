fopen();//�򿪻��ߴ���һ���ļ�

getc();  //������getchar()�� 
ch = getc("�ļ���");  
// while((ch = getc(fp)) != EOF) 

putc();//��getc()һ���ã�����
putc(ch,"�ļ���"); 

exit();//�˳�    #include <stdlib.h> 

fclose();//�ر��ļ�

fprintf();//��� 
/*����*/  fprintf(stderr,"Error in closing files\n");

fscanf();//���� 
/*����*/  fscanf("�ļ���","%s(����)",words/*(������ĵط�)*/)
//������ scanf("%s",&words����
 
fgets();//����
fgets("�����ַ","�ַ�����󳤶�","�ļ�ָ��"); 
//��һ�������ַ������������ַ������ȼ�1; 

fputs();//���
fputs("�����ַ","�ļ�ָ��");

rewind();//���ļ�ָ������ָ���ļ���ͷ
void rewind(FILE *stream);

fseek();
fseek("�ļ�ָ��","ƫ����","ģʽ");
//ƫ��������Ϊlong ֵ 

ps: fseek(fp,0L,SEEK_SET);
//SEEK_SET      �ļ���ʼ  Ϊ 0 
//SEEK_CUR      ��ǰλ��
//SEEK_END      �ļ���β

ftell(); //�����ļ���ǰλ��
//���ļ���ʼ�����ֽ��� 

fflush();//���

fgetpos();  //ͬfseek();
int fgetpos(FILE * restrict stream, fpos_t * restrict pos);
//������ʱ���ú�����posָ���λ���Ϸ�һ�� fpos_t ֵ��
//���ֵ�������ļ��е�һ��λ��
//�ɹ����� 0 �� ���� ����һ������ֵ 

//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//    FILE *fp;
//    char string[] = "This is a test";
//    fpos_t pos;
//    // �Զ�д��ʽ��һ����Ϊtest.txt���ļ�
//    fp = fopen("test.txt", "w+");
//    //\���ַ���д���ļ�
//    fwrite(string, strlen(string), 1, fp);
//    // ȡ��ָ��λ�ò�����&pos��ָ��Ķ���
//    fgetpos(fp, &pos);
//    printf("The file pointer is at byte %ld\n", pos);
//    // �����ļ�ָ���λ��
//    fseek(fp,3,0);
//    // �ٴ�ȡ��ָ��λ�ò�����&pos��ָ��Ķ���
//    fgetpos(fp, &pos);
//    printf("The file pointer is at byte %ld\n", pos);
//    fclose(fp);
//    return 0;
//}
 
fsetpos(); //��λ�ļ�ָ�� 
int fsetpos(FILE *stream,const fpos_t *pos);
//������ʱ���ú���ʹ��posָ���λ���ϵ��Ǹ� fpos_t ֵ�趨Ϊ�ļ�ָ��ָ���ֵ��ָʾ��λ��
//�ɹ����� 0 �� ͬ��

//#include <stdio.h>
//void main( void )
//{
//    FILE   *fp;
//    fpos_t pos;
//    char   buffer[50];
//    if( (fp = fopen( "test.txt", "rb" )) == NULL )
//        printf( "Trouble opening file" );
//    else
//    {
//        pos = 10;
//    
//        if( fsetpos( fp, &pos ) != 0 )
//            perror( "fsetpos error" );
//        else
//        {
//            fread( buffer, sizeof( char ), 16, fp );
//            printf( "16 bytes at byte %ld: %.16s", pos, buffer );
//        }
//    }
//    fclose( fp );
//} 

feof();
//�ļ�ĩβ���ط���ֵ������ 0
 
ferror();
//��д���� ���ط���ֵ�� ���� 0 

ungetc();
int ungetc(int c, FILE * fp);
//������� 
 
setvbuf();//������� 

fread();//��ȡ 
size_t fread(void * restrict ptr, size_t size, size_t nmemb,FILE * restrict fp);
//ͬ����� 

fwrite();//д�� 
size_t fwrite(const void * restrict ptr, size_t size, size_t nmemb,FILE * restrict fp);
//������������д���ļ�
//ptr Ҫ��д��ĵط�    ��    size д�����ݿ�Ĵ�С���ֽڵ�λ��
//nmemb ���ݿ����Ŀ   ;  	  fp    �ļ���ַ


//���� 
//�ļ�ָ�� 
int main()
{
	int ch;
	FILE *fp;
	long count = 0;
	
	if((fp = fopen("�ļ���","�����ʽ")) == NULL)  //��֤�Ƿ���ļ� 
	{
		printf("Can't open %s\n","�ļ���");
		exit(1);      //#include <stdlib.h>  �ṩexit()ԭ�� 
	}
	
	//��������ļ� (�����ڶ�����ģʽ) ("rb")
	fseek(fp, 0L,SEEK_END);
	last = ftell(fp);
	for(count = 1L; count <= last; cout++)
	{
		fseek(fp, -count, SEEK_END);
		ch = getc(fp);
		putchar(ch);
	}
	
	if(fclose(fp) != 0)
		fprintf(stderr,"Error in closing file %s\n","�ļ���");
		
	return 0;
}

"r" //��һ���ı��ļ������Զ�ȡ�ļ�

"rb" //��һ���������ı��ļ���ֻ���Զ�
 
"w" //��һ���ı��ļ�������д���ļ���
//�Ƚ��ļ����Ƚ�Ϊ�㡣�������ȴ���֮

"a" //��һ���ı��ļ�������д���ļ���
//�������ļ���β��׷�����ݣ�
//������ļ����������ȴ���֮

"r+" //��һ���ı��ļ������Խ��и��£�
//Ҳ�����Զ�ȡ��д���ļ�

"w+" //��һ���ı��ļ������Խ��и��£���ȡ��д�룩��
//������ļ����������Ƚ��䳤�Ƚ�Ϊ�㣻������������ȴ���֮

"a+" //��һ���ı��ļ������Խ��и��£���ȡ��д�룩��
//��β��׷�����ݣ�ͬ��

"rb+" //��д��һ���������ļ��������д

"rw" //��д��һ���ı��ļ��������д

"wb" //�򿪻��½�һ���������ļ���ֻ����д

"wb+" //�򿪻��½�һ���������ļ����������д

"ab+" //��д��һ���������ļ���
//������������ļ�ĩ��׷������ 
