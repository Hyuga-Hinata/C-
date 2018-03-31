<ctype.h>

int isalpha(c)
c是字母字符
int isdigit(c)
c是数字字符
int isalnum(c)
c是字母或数字字符
int isspace(c)
c是空格、制表符、换行符
int isupper(c)
c是大写字母
int islower(c)
c是小写字母
int iscntrl(c)
c是控制字符
int isprint(c)
c是可打印字符，包括空格
int isgraph(c)
c是可打印字符，不包括空格
int isxdigit(c)
c是十六进制数字字符
int ispunct(c)
c是标点符号
int tolower(int c)
当c是大写字母时返回对应小写字母，否则返回c本身
int toupper(int c)
当c是小写字母时返回对应大写字母，否则返回c本身

<string.h>

size_t strlen(cs)
求出cs的长度
char *strcpy(s,ct)
把ct复制到s。要求s指定足够大的字符数组
char *strncpy(s,ct,n)
把ct里的至多n个字符复制到s。要求s指定一个足够大的字符数组。如果ct里的字符不够n个，就在s里填充空字符。
char *strcat(s,ct)
把ct里的字符复制到s里已有的字符串之后。s应指定一个保存着字符串，而且足够大的字符数组。
char *strncat(s,ct,n)
把ct里的至多n个字符复制到s里已有的字符串之后。s应指定一个保存着字符串，而且足够大的字符数组。
int strcmp(cs,ct)
比较字符串cs和ct的大小，在cs大于、等于、小于ct时分别返回正值、0、负值。
int strncmp(cs,ct,n)
比较字符串cs和ct的大小，至多比较n个字符。在cs大于、等于、小于ct时分别返回正值、0、负值。
char *strchr(cs,c)
在cs中查寻c并返回c第一个出现的位置，用指向这个位置的指针表示。当cs里没有c时返回值NULL
char *strrchr(cs,c)
在cs中查寻c并返回c最后一个出现的位置，没有时返回NULL
size_t strspn(cs,ct)
由cs起确定一段全由ct里的字符组成的序列，返回其长度
size_t strcspn(cs,ct)
由cs起确定一段全由非ct里的字符组成的序列，返回其长度
char *strpbrk(cs,ct)
在cs里查寻ct里的字符，返回第一个满足条件的字符出现的位置，没有时返回NULL
char *strstr(cs,ct)
在cs中查寻串ct（查询子串），返回ct作为cs的子串的第一个出现的位置，ct未出现在cs里时返回NULL
char *strerror(n)
返回与错误编号n相关的错误信息串（指向该错误信息串的指针）
char *strtok(s,ct)
在s中查寻由ct中的字符作为分隔符而形成的单词

<stdlib.h>

int rand(void)
生成一个0到RAND_MAX的随机整数
void srand(unsigned seed)
用seed为随后的随机数生成设置种子值

void *malloc(size_t size)
分配一块足以存放大小为size的存储，返回该存储块的地址，不能满足时返回NULL

<time.h>
随机数要用 

srand((unsigned int)time(NULL));


