#include<stdio.h>
#include<string.h>
int main()
{
    char a[2001],b[2001],c[2001];
    int n=0,k,i,j,m;
    scanf("%d",&k);
    getchar();
    for(i=0;i<k;i++)
    {
        int flag=0;
        scanf("%s %s",a,b);
        printf("Case %d:\n",n=n+1);
        for(j=0;j<strlen(a);j++) printf("%c",a[j]);
                                 printf(" + ");
        for(j=0;j<strlen(b);j++) printf("%c",b[j]);
                                 printf(" = ");
        if(strlen(a)<strlen(b))
        {
            strcpy(c,a);
            strcpy(a,b);
            strcpy(b,c);
        }//��֤a�
        for(j=strlen(a)-1,m=strlen(b)-1;m>=0;j--,m--)
        {//����̵�b��0λ
            if (a[j]-'0'+b[m]-'0'>=10)
            {
                a[j]=(a[j]-'0'+b[m]-'0')%10+'0';
                if (m==0) flag=1;  //����Ƿ�Ҫ��1
                else a[j-1]=a[j-1]+1;
            }
            else a[j]=a[j]+b[m]-'0';
        }
       int cc=strlen(a)-strlen(b)-1;
       if(flag==1&&cc==-1) printf("1"); //�����ȳ����
       else if (flag==1&&cc!=-1)
       {
           if(a[cc]-'0'+1>=10)
           {
                while(a[cc]-'0'+1>=10)
                {
                    a[cc]='0';
                    if (cc==0)  //ѭ������һ���1ʱ
                    {
                        printf("1");
                        break;
                    }
                    cc=cc-1;   //�ǵ�һ��Ҫ��1
                    a[cc]=a[cc]+1;
                }
           }
           else a[cc]=a[cc]+1;
       }
       for(j=0;j<strlen(a);j++) printf("%c",a[j]);
       printf("\n");
       if (i!=k-1) printf("\n");  //�����������������
    }
    return  0;
}
