#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int mynum,i , usernum;
char ch;
srand(time(NULL));
mynum = rand() % 40;
printf("I have a number in mind (0-20). can you guess it?\n");
while(i<5)
{
printf("Enter your guess\n");
scanf("%d",&usernum);
if(mynum== usernum){
printf("You win!!\n");
break;
}
else if(mynum>usernum)
{
	printf("My value is greater than %d\n",usernum);
}
else
{
	printf("My value is smaller than %d\n",usernum);
}

if(i>=5 && mynum!=usernum)
{
	printf("You loose it");
}
printf("press y to continue \npress n to exit");
scanf("%c",&ch);
if(ch=='y' && i==4)
continue;
else if (ch=='n')
break;
i++;		
  
}
return 0;
}
