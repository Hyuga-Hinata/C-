#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void translate(char *);
int main(void)
{
	int i=0,j;
	char Alphabet[450],alphabet[50][9];
	gets(Alphabet);
	while(i<50)
	{
		int I,I1=0,I2,J,n,m;
		for(I=0;I<strlen(Alphabet);I++)
		{
			if(Alphabet[I]==' ')
			{
				I2=I-1;
				for(n=I1,m=0;n<=I2&&m<9;n++,m++)
				alphabet[i][m]=Alphabet[n];
				
				alphabet[i][m]='\0';
				i++;
				I1=I+1;
			}
				
				
			if(Alphabet[I+1]=='\0')
			{
				I2=I;
				for(n=I1,m=0;n<=I2&&m<9;n++,m++)
				alphabet[i][m]=Alphabet[n];	
					
				alphabet[i][m]='\0';
				i++;
			}
		}
		
		if(I==strlen(Alphabet))
		break;
	}
	
	for(j=0;j<i;j++)
	{
		//printf("%s",alphabet[j]);
		translate(alphabet[j]);
	}
	printf("\n");
	
	return 0;
}

void translate(char * k)
{
	if(strcmp(k,"I")==0 ||strcmp(k,"WE")==0)
	{
		printf("!");
		return ;
	}
	if(strcmp(k,"NELLEXIAN")==0)
	{
		printf("#");
		return;
	}
	if(strcmp(k,"HE")==0 || strcmp(k,"THEY")==0)
	{
		printf("&");
		return ;
	}
	
	if(strcmp(k,"SHE")==0)
	{
		printf("$");
		return ;
	}
	if(strcmp(k,"SAW")==0)
	{
		printf("%%");
		return ;
	}
	
	if(strcmp(k,"WENT")==0)
	{
		printf(">");
		return ;
	}

	if(strcmp(k,"TO")==0)
	{
		printf("*");
		return ;
	}
	if(strcmp(k,"THE")==0)
	{
		printf("^");
		return ;
	}
	if(strcmp(k,"A")==0)
	{
		printf("<");
		return ;
	}
	if(strcmp(k,"NELLEX")==0)
	{
		printf("?");
		return ;
	}
	if(strcmp(k,"PLANET")==0)
	{
		printf("[");
		return ;	
	}
	if(strcmp(k,"BIG")==0)
	{
		printf("+");
		return ;
	}
	if(strcmp(k,"SMALL")==0)
	{
		printf("-");
		return ;
	}
	if(strcmp(k,"EARTH")==0)
	{
		printf("\"");
		return ;
	}
	if(strcmp(k,"HAS")==0||strcmp(k,"HAVE")==0)
	{
		printf("]");
		return ;
	}
	if(strcmp(k,"MOON")==0)
	{
		printf(":");
		return ;
	}
	if(strcmp(k,"AND")==0)
	{
		printf("/");
		return ;
	}
	if(strcmp(k,"IS")==0||strcmp(k,"AM")==0||strcmp(k,"ARE"))
	{
		printf("=");
		return ;
	}
	if(strcmp(k,"OR")==0)
	{
		printf(";");
		return ;
	}
	
}

