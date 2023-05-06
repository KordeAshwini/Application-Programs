#include<stdio.h>
#include<stdbool.h>

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
bool CheckPerfect(int iNumber)
{
	int iresult=0;
	iresult=SumFactors(iNumber);
	if(iresult==iNumber)
	{
		return true;
	}	
	else
	{
		return false;
	}	
}

int main()
{
	int ivalue=0;
	bool bret=0;
	
	printf("Enter number:\n");
	scanf("%d",&ivalue);
	
	bret=CheckPerfect(ivalue);
	if(bret==true)
	{
		printf("%d is perfect number",ivalue);
	}
    else
    {
		printf("%d is not perfect number",ivalue);
	}		
	
	return 0;
}