#include<stdio.h>
#define ADJUST 7.64
#define SCALE  0.325
int main(void)
{
	double shoe,foot;
	
	printf("Shoe size(men's)     foot length\n");
	shoe=3.0;  //´Ó3¿ªÊ¼ 
	while (shoe<18.5)
	{
		foot=SCALE*shoe+ADJUST;
		printf("%10.1f %15.2f inches\n",shoe,foot);
		shoe=shoe+1; 
	}
	printf("If the shoe fits,wear it.\n");
	return 0;
}
