#include<stdio.h>

int main()
{
		float x,y;
	char ch;
	printf("Enter your desirde amount\n");
	scanf("%f",&x);
	printf("1---Press 1 to credit amount\n2---Press 2 for debit amount\n3---Press 3 to check balance \n\n");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case '1':
			printf("Enter your credit amount please\n");
			scanf("\n%f",&y);
			x=x+y;
			printf("Your current amount is %f\n\n",x);
			
			case '2':
			printf("Enter your debit amount please \n\n");
			scanf("%f",&y);
			if(x>y)
			{
			x=x-y;
			printf("Your current amount is %f\n\n",x);
		}
		else
		{
		printf("Insufficient Amount\n\a");
	    }
	    case '3':
	    printf("Check current balance \n");
		printf("Your current amount is %f",x);
		break;
		default:
		printf("Invalid Choice\a");	
	}
}
