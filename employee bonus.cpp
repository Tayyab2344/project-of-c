#include<stdio.h>
int main()
{
	int salary,grade;
	float bonus;
	printf("Enter the grade of employee\n");
	scanf("%d",&grade);
	printf("Enter the salary of an employee\n ");
	scanf("%d",&salary);
	if(grade>=15){

	bonus=salary+((50*salary)/100);
	printf("Salary of employee is %d",bonus);
}
	else if(grade<15){
	
	bonus=salary+((25*salary)/100);
	printf("Salary of employee is %f",bonus);
}
	else{
	
	printf("No bonus");
	
}
		return 0;
}
