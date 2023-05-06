#include<stdio.h>

int SumFactors(int iNo)
{
	int icnt=0;
	int isum=0;
	
	if(iNo<0)//updater
	{
		iNo=-iNo;
	}	
	for(icnt=1; icnt<=(iNo/2); icnt++)
	{
		if((iNo%icnt)==0)
		{
			isum=isum+icnt;
		}	
	}
   return isum;	
}

int main()
{
	int ivalue=0;
	int iret=0;
	
	printf("Enter number:\n");
	scanf("%d",&ivalue);
	
	iret=SumFactors(ivalue);
	
	printf("sum of factors is: %d\n",iret);
	return 0;
}