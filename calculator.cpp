#include<stdio.h>
 int main() 
 {
 char op;
 double first, second;
 printf("Enter any operator\n");
 scanf("%c",&op);
 printf("Enter two operands:");
 scanf("%lf %lf",&first,&second);
switch(op) {
	case '+':
		printf("%.1lf + %.1lf = %.1lf" ,first , second, first + second);
		break;
			case '-':
		printf("%.1lf - %.1lf = %.1lf" ,first , second, first - second);
			break;
			case '*':
		printf("%.1lf * %.1lf = %.1lf" ,first , second, first * second);
			break;
			case '/':
		printf("%.1lf / %.1lf = %.1lf" ,first , second, first / second);
			break;
				default:
					printf("Error! Operator is not correct");
		
		
}	
	
}
