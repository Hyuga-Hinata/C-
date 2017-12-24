#include<stdio.h>
int main(void)
{
     int a,b,c,d;
    for(d=1;d<6;d++){
	  for(a=5;a-d>0;a--)
	    printf(" ");  
           for(b='A',c=1;c<d;c++,b++)
             printf("%c",b);
       for(;c>0;c--,b--)
       printf("%c",b);
	
	printf("\n");}
	return 0;
 } 
