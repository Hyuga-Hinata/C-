fopen();//打开或者创建一个文件

getc();  //类似于getchar()； 
ch = getc("文件名");  
// while((ch = getc(fp)) != EOF) 

putc();//与getc()一起用，类似
putc(ch,"文件名"); 

exit();//退出    #include <stdlib.h> 

fclose();//关闭文件

fprintf();//输出 
/*常用*/  fprintf(stderr,"Error in closing files\n");

fscanf();//输入 
/*常用*/  fscanf("文件名","%s(类型)",words/*(所储存的地方)*/)
//类似于 scanf("%s",&words）；
 
fgets();//输入
fgets("储存地址","字符串最大长度","文件指针"); 
//第一个换行字符后面或者最大字符串长度减1; 

fputs();//输出
fputs("储存地址","文件指针");

rewind();//将文件指针重新指向文件开头
void rewind(FILE *stream);

fseek();
fseek("文件指针","偏移量","模式");
//偏移量必须为long 值 

ps: fseek(fp,0L,SEEK_SET);
//SEEK_SET      文件开始  为 0 
//SEEK_CUR      当前位置
//SEEK_END      文件结尾

ftell(); //返回文件当前位置
//到文件开始处的字节数 

fflush();//清空

fgetpos();  //同fseek();
int fgetpos(FILE * restrict stream, fpos_t * restrict pos);
//被调用时，该函数在pos指向的位子上放一个 fpos_t 值，
//这个值描述了文件中的一个位置
//成功返回 0 ； 否则， 返回一个非零值 

//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//    FILE *fp;
//    char string[] = "This is a test";
//    fpos_t pos;
//    // 以读写方式打开一个名为test.txt的文件
//    fp = fopen("test.txt", "w+");
//    //\将字符串写入文件
//    fwrite(string, strlen(string), 1, fp);
//    // 取得指针位置并存入&pos所指向的对象
//    fgetpos(fp, &pos);
//    printf("The file pointer is at byte %ld\n", pos);
//    // 重设文件指针的位置
//    fseek(fp,3,0);
//    // 再次取得指针位置并存入&pos所指向的对象
//    fgetpos(fp, &pos);
//    printf("The file pointer is at byte %ld\n", pos);
//    fclose(fp);
//    return 0;
//}
 
fsetpos(); //定位文件指针 
int fsetpos(FILE *stream,const fpos_t *pos);
//被调用时，该函数使用pos指向的位置上的那个 fpos_t 值设定为文件指针指向该值所指示的位置
//成功返回 0 ； 同上

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
//文件末尾返回非零值，否则 0
 
ferror();
//读写错误， 返回非零值， 否则 0 

ungetc();
int ungetc(int c, FILE * fp);
//不用理解 
 
setvbuf();//不用理解 

fread();//读取 
size_t fread(void * restrict ptr, size_t size, size_t nmemb,FILE * restrict fp);
//同下理解 

fwrite();//写入 
size_t fwrite(const void * restrict ptr, size_t size, size_t nmemb,FILE * restrict fp);
//将二进制数据写入文件
//ptr 要被写入的地方    ；    size 写入数据块的大小（字节单位）
//nmemb 数据块的数目   ;  	  fp    文件地址


//基础 
//文件指针 
int main()
{
	int ch;
	FILE *fp;
	long count = 0;
	
	if((fp = fopen("文件名","读入格式")) == NULL)  //验证是否打开文件 
	{
		printf("Can't open %s\n","文件名");
		exit(1);      //#include <stdlib.h>  提供exit()原型 
	}
	
	//倒着输出文件 (适用于二进制模式) ("rb")
	fseek(fp, 0L,SEEK_END);
	last = ftell(fp);
	for(count = 1L; count <= last; cout++)
	{
		fseek(fp, -count, SEEK_END);
		ch = getc(fp);
		putchar(ch);
	}
	
	if(fclose(fp) != 0)
		fprintf(stderr,"Error in closing file %s\n","文件名");
		
	return 0;
}

"r" //打开一个文本文件，可以读取文件

"rb" //打开一个二进制文本文件。只可以读
 
"w" //打开一个文本文件，可以写入文件，
//先将文件长度截为零。不存在先创建之

"a" //打开一个文本文件，可以写入文件，
//向已有文件的尾部追加内容，
//如果该文件不存在则先创建之

"r+" //打开一个文本文件，可以进行更新，
//也即可以读取和写入文件

"w+" //打开一个文本文件，可以进行更新（读取和写入），
//如果该文件存在则首先将其长度截为零；如果不存在则先创建之

"a+" //打开一个文本文件，可以进行更新（读取和写入），
//向尾部追加内容，同上

"rb+" //读写打开一个二进制文件，允许读写

"rw" //读写打开一个文本文件，允许读写

"wb" //打开或新建一个二进制文件，只允许写

"wb+" //打开或新建一个二进制文件，允许读和写

"ab+" //读写打开一个二进制文件，
//允许读或者在文件末端追加数据 
