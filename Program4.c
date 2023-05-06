#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
        if(isum>iNo)
        {
			break;
		} 			
	}
   
	if(isum==iNo)
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
	bool bret=false;
	
	printf("Enter number:\n");
	scanf("%d",&ivalue);
	
	bret=CheckPerfect(ivalue);
	
	if(bret==true)
	{
		printf("%d is a Perfect number\n",ivalue);
	}
    else
    {
		printf("%d is not a Perfect number\n",ivalue);
	}		
	return 0;
}