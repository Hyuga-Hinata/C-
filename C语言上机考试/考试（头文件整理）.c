<ctype.h>

int isalpha(c)
c����ĸ�ַ�
int isdigit(c)
c�������ַ�
int isalnum(c)
c����ĸ�������ַ�
int isspace(c)
c�ǿո��Ʊ�������з�
int isupper(c)
c�Ǵ�д��ĸ
int islower(c)
c��Сд��ĸ
int iscntrl(c)
c�ǿ����ַ�
int isprint(c)
c�ǿɴ�ӡ�ַ��������ո�
int isgraph(c)
c�ǿɴ�ӡ�ַ����������ո�
int isxdigit(c)
c��ʮ�����������ַ�
int ispunct(c)
c�Ǳ�����
int tolower(int c)
��c�Ǵ�д��ĸʱ���ض�ӦСд��ĸ�����򷵻�c����
int toupper(int c)
��c��Сд��ĸʱ���ض�Ӧ��д��ĸ�����򷵻�c����

<string.h>

size_t strlen(cs)
���cs�ĳ���
char *strcpy(s,ct)
��ct���Ƶ�s��Ҫ��sָ���㹻����ַ�����
char *strncpy(s,ct,n)
��ct�������n���ַ����Ƶ�s��Ҫ��sָ��һ���㹻����ַ����顣���ct����ַ�����n��������s�������ַ���
char *strcat(s,ct)
��ct����ַ����Ƶ�s�����е��ַ���֮��sӦָ��һ���������ַ����������㹻����ַ����顣
char *strncat(s,ct,n)
��ct�������n���ַ����Ƶ�s�����е��ַ���֮��sӦָ��һ���������ַ����������㹻����ַ����顣
int strcmp(cs,ct)
�Ƚ��ַ���cs��ct�Ĵ�С����cs���ڡ����ڡ�С��ctʱ�ֱ𷵻���ֵ��0����ֵ��
int strncmp(cs,ct,n)
�Ƚ��ַ���cs��ct�Ĵ�С������Ƚ�n���ַ�����cs���ڡ����ڡ�С��ctʱ�ֱ𷵻���ֵ��0����ֵ��
char *strchr(cs,c)
��cs�в�Ѱc������c��һ�����ֵ�λ�ã���ָ�����λ�õ�ָ���ʾ����cs��û��cʱ����ֵNULL
char *strrchr(cs,c)
��cs�в�Ѱc������c���һ�����ֵ�λ�ã�û��ʱ����NULL
size_t strspn(cs,ct)
��cs��ȷ��һ��ȫ��ct����ַ���ɵ����У������䳤��
size_t strcspn(cs,ct)
��cs��ȷ��һ��ȫ�ɷ�ct����ַ���ɵ����У������䳤��
char *strpbrk(cs,ct)
��cs���Ѱct����ַ������ص�һ�������������ַ����ֵ�λ�ã�û��ʱ����NULL
char *strstr(cs,ct)
��cs�в�Ѱ��ct����ѯ�Ӵ���������ct��Ϊcs���Ӵ��ĵ�һ�����ֵ�λ�ã�ctδ������cs��ʱ����NULL
char *strerror(n)
�����������n��صĴ�����Ϣ����ָ��ô�����Ϣ����ָ�룩
char *strtok(s,ct)
��s�в�Ѱ��ct�е��ַ���Ϊ�ָ������γɵĵ���

<stdlib.h>

int rand(void)
����һ��0��RAND_MAX���������
void srand(unsigned seed)
��seedΪ���������������������ֵ

void *malloc(size_t size)
����һ�����Դ�Ŵ�СΪsize�Ĵ洢�����ظô洢��ĵ�ַ����������ʱ����NULL

<time.h>
�����Ҫ�� 

srand((unsigned int)time(NULL));


