#include<stdio.h>
#include<ctype.h>
/*void menu(void);
void input(void);
void menu1(void);
void calculate1(void);
void calculate2(void);*/

int main(void)
{
	int i=0,n,WATER_AMOUNT,TYPE,SURFACE,TOL_AMOUNT=0,Tol_AMOUNT=0,BASIC;
    float FRESH_MONEY,WASTE_MONEY,DAILY,Tol,TOL=0,TOL1=0,VAT,MAX=0;
	printf("The following is the menu:\n");
	printf("1.Compute and Print the Bill for a Customer\n");
	printf("2.Show Sums and Statistics\n");
	printf("3.Quit the program\n\n");
	
	printf("Please enter your choice (1, 2, or 3):");
    scanf("%d",&n);
	while(n!=1&&n!=2&&n!=3)
	   {
	   	   printf("Please enter again.\nI can't understand:");
	   	   scanf("%d",&n);
	   }
	if(n==2)
	{
	  	printf("There is no information.\n");
	}
	while(n==1)
	{
	  	printf("\nPlease enter your information: \n");
	 	printf("Type of customer (domestic(1) or commercial(2)):");
		scanf("%d",&TYPE);
		while(TYPE!=1&&TYPE!=2)
		{
			printf("Please not kid me?Enter again(1 or 2): ");
			scanf("%d",&TYPE);
		}
	
		printf("Amount of fresh water consumption:");
		scanf("%d",&WATER_AMOUNT);
	  	printf("\n");	  	   
	  	if(TYPE==1)
	  	{
	  		i++;
	  		if(WATER_AMOUNT<=5)
	   		FRESH_MONEY=0.20*WATER_AMOUNT;
		    else
	        {
	   	    FRESH_MONEY=0.20*5;
			if(WATER_AMOUNT>5&&WATER_AMOUNT<=12)
			    FRESH_MONEY+=0.35*(WATER_AMOUNT-5);
			else
			{
			    FRESH_MONEY+=0.35*7;
				if(WATER_AMOUNT>12&&WATER_AMOUNT<=25)
				FRESH_MONEY+=0.5*(WATER_AMOUNT-12);	
				else
				{
					FRESH_MONEY+=0.5*13;
					if(WATER_AMOUNT>25&&WATER_AMOUNT<=40)
					    FRESH_MONEY+=0.75*(WATER_AMOUNT-25);
					else
					{
						FRESH_MONEY+=0.75*15;
						if(WATER_AMOUNT>40)
						FRESH_MONEY+=2.5*(WATER_AMOUNT-40);
					}
				}
			}    
	   	}
		WASTE_MONEY=0.95*WATER_AMOUNT*0.25;
		SURFACE=10;
		DAILY=9.1;
		Tol=FRESH_MONEY+WASTE_MONEY+SURFACE+DAILY;
		if(MAX<Tol)
	    	MAX=Tol;
	    TOL1+=Tol;
		TOL+=Tol;
		Tol_AMOUNT+=WATER_AMOUNT;
		TOL_AMOUNT+=WATER_AMOUNT;
		}
		if(TYPE==2)
		{
			FRESH_MONEY=2.5*WATER_AMOUNT;
			WASTE_MONEY=0.95*WATER_AMOUNT*2;
			SURFACE=50;
			DAILY=1.3*91;
			VAT=0.2*(FRESH_MONEY+WASTE_MONEY+SURFACE+DAILY);
			Tol=FRESH_MONEY+WASTE_MONEY+SURFACE+DAILY+VAT;
			TOL=TOL+Tol-VAT;
			TOL_AMOUNT+=WATER_AMOUNT;
			}
			BASIC=TOL_AMOUNT;
			printf("\n1)Print the bill for any customer:\n");
			if(TYPE==1)
	    		printf("Type of customer (domestic or commercial):  domestic\n");
			if(TYPE==2)
	   			printf("Type of customer (domestic or commercial):  commercial\n");
	   		
		printf("Amount of fresh water consumption:              %d\n",WATER_AMOUNT);
		printf("Fresh water charges:                            $%.2f\n",FRESH_MONEY);
		printf("Waste water charges:                            $%.4f\n",WASTE_MONEY);
		printf("Surface water charges:                          $%d\n",SURFACE);
		printf("Standing charges:                               $%.1f\n",DAILY);
		
		if(TYPE==2)
	    	printf("Amount of VAT:                              $%.5f\n",VAT);
	    	
		printf("\nTotal amount to pay:                            $%.2f\n",Tol);
	  	printf("\nThe following is the menu:\n");
		printf("1.Compute and Print the Bill for a Customer\n");
		printf("2.Show Sums and Statistics\n");			printf("3.Quit the program\n\n");
	
		printf("Please enter your choice (1, 2, or 3):");
	  	scanf("%d",&n);
		while(n!=1&&n!=2&&n!=3)
   		{
		   	printf("Please enter again.\nI can't understand:");
	   	    scanf("%d",&n);
	    }
	    while(n==2)
	    {
			printf("\n2)The following are some quarterly sums and statistics:");
			printf("\nA.The total amount of fresh water consumed by all customers:                                   %d\n",TOL_AMOUNT);
			printf("B.The total amount of fresh water consumed by domestic customers:                              %d\n",Tol_AMOUNT);
			printf("C.The total amount of revenue from all the bills :                                             $%.2f\n",TOL);
			printf("D.The total cost of providing water to customers :                                             $%d\n",BASIC);
			
			if((TOL-BASIC)>=0)
	    		printf("E.The profit of the company:                                                                   $%.2f\n",TOL-BASIC);
	    		
			if((TOL-BASIC)<0)
	   		 	printf("E.The  loss of the company:                                                                    $%.2f\n",TOL-BASIC);
	   		 	
			printf("F.The income tax the company has to pay to the government assuming an income tax rate of 25%:   $%.2f\n",0.25*(TOL-BASIC));
			printf("H.The maximum domestic consumer bill:                                                          $%.2f\n",MAX);
			printf("The average domestic consumer bill:                                                            $%.2f\n",TOL1/i);
	  	    printf("\n");
	  	    printf("The following is the menu:\n");
			printf("1.Compute and Print the Bill for a Customer\n");
			printf("2.Show Sums and Statistics\n");
			printf("3.Quit the program\n\n");
	
			printf("Please enter your choice (1, 2, or 3):");
	     	scanf("%d",&n);
			while(n!=1&&n!=2&&n!=3)
	    	{
	   	    	printf("Please enter again.\nI can't understand:");
	   	    	scanf("%d",&n);
	    	}
	    } 
	}
	
	printf("\nTHANKS!\tBye!");
	return 0;
}

/*void menu(void)
{
	printf("The following is the menu:\n");
	printf("1.Compute and Print the Bill for a Customer\n");
	printf("2.Show Sums and Statistics\n");
	printf("3.Quit the program\n\n");
	
	printf("Please enter your choice (1, 2, or 3):");
	return ;
}

void input(void)
{
	scanf("%d",&n);
	while(n!=1&&n!=2&&n!=3)
	   {
	   	   printf("Please enter again.\nI can't understand:");
	   	   scanf("%d",&n);
	   }
	return ;
}

void menu1(void)
{
	printf("Please enter your information: \n");
	printf("Type of customer (domestic(1) or commercial(2)):");
	scanf("%d",&TYPE);
	while(TYPE!=1&&TYPE!=2)
	{
		printf("Please not kid me?Enter again(1 or 2): ");
		scanf("%d",&TYPE);
	}
	
	printf("Amount of fresh water consumption:");
	scanf("%d",&WATER_AMOUNT);
	i++;
	return ;
}

void menu2(void)
{
	printf("1)Compute and print the bill for any customer.\n");
	if(TYPE==1)
	    printf("Type of customer (domestic or commercial):  domestic\n");
	if(TYPE==2)
	    printf("Type of customer (domestic or commercial):  commercial\n");
	printf("Amount of fresh water consumption:  %d\n",WATER_AMOUNT);
	printf("Fresh water charges:               $%.2f\n",FRESH_MONEY);
	printf("Waste water charges:               $%.4f\n",WASTE_MONEY);
	printf("Surface water charges:             $%d\n",SURFACE);
	printf("Standing charges:                  $%.1f\n",DAILY);
	if(TYPE==2)
	    printf("Amount of VAT:                 $%.5f\n",VAT);
	printf("\nTotal amount to pay:             $%.4f\n",Tol);
	
	printf("\n2)Compute the following quarterly sums and statistics:");
	printf("\nA.The total amount of fresh water consumed by all customers:         %d\n",TOL_AMOUNT);
	printf("B.The total amount of fresh water consumed by domestic customers:      %d\n",Tol_AMOUNT);
	printf("C.The total amount of revenue from all the bills :    $%.5f\n",TOL);
	printf("D.The total cost of providing water to customers :    $%d\n",BASIC);
	if((TOL-BASIC)>=0)
	    printf("E.The profit of the company:  $%.5f\n",TOL-BASIC);
	if((TOL-BASIC)<0)
	    printf("E.The  loss of the company:   $%.5f\n",TOL-BASIC);
	printf("F.The income tax the company has to pay to the government assuming an income tax rate of 25%:  $%.7f\n",0.25*(TOL-BASIC));
	printf("The average domestic consumer bill:   $%.5f\n",TOL/i);
	printf("H.The maximum domestic consumer bill: $%.5f\n",MAX);
	
} 

void calculate1(void)
{
	if(WATER_AMOUNT<=5)
	   FRESH_MONEY=0.20*WATER_AMOUNT;
	else
	   {
	   	    FRESH_MONEY=0.20*5;
			if(WATER_AMOUNT>5&&WATER_AMOUNT<=12)
			    FRESH_MONEY+=0.35*(WATER_AMOUNT-5);
			else
			{
			    FRESH_MONEY+=0.35*7;
				if(WATER_AMOUNT>12&&WATER_AMOUNT<=25)
				FRESH_MONEY+=0.5*(WATER_AMOUNT-12);	
				else
				{
					FRESH_MONEY+=0.5*13;
					if(WATER_AMOUNT>25&&WATER_AMOUNT<=40)
					    FRESH_MONEY+=0.75*(WATER_AMOUNT-25);
					else
					{
						FRESH_MONEY+=0.75*15;
						if(WATER_AMOUNT>40)
						FRESH_MONEY+=2.5*(WATER_AMOUNT-40);
					}
				}
			}    
	   }
	WASTE_MONEY=0.95*WATER_AMOUNT*0.25;
	SURFACE=10;
	DAILY=9.1;
	Tol=FRESH_MONEY+WASTE_MONEY+SURFACE+DAILY;
	if(MAX<Tol)
	    MAX=Tol;
	TOL+=Tol;
	Tol_AMOUNT+=WATER_AMOUNT;
	TOL_AMOUNT+=WATER_AMOUNT;
	return ;
} 

void calculate2(void)
{
	FRESH_MONEY=2.5*WATER_AMOUNT;
	WASTE_MONEY=0.95*WATER_AMOUNT*2;
	SURFACE=50;
	DAILY=1.3*91;
	VAT=0.2*(FRESH_MONEY+WASTE_MONEY+SURFACE+DAILY);
	Tol=FRESH_MONEY+WASTE_MONEY+SURFACE+DAILY+VAT;
	if(MAX<Tol)
	    MAX=Tol;
	TOL=TOL+Tol-VAT;
	TOL_AMOUNT+=WATER_AMOUNT;
	return ;
}*/
