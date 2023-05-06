#include<stdio.h>

void DisplayFactors(int iNo)
{
	int icnt=0;
	for(icnt=1; icnt<=(iNo/2); icnt++)
	{
		if((iNo%icnt)==0)
		{
			printf("%d\n",icnt);
		}	
	}	
}

int main()
{
	int ivalue=0;
	
	printf("Enter number:\n");
	scanf("%d",&ivalue);
	
	DisplayFactors(ivalue);
	
	return 0;
}