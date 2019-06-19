#include <stdio.h>

int Getnum(void)
{
	int local_var;
	
	printf("Please enter an integer : ");
	scanf("%d%*c", &local_var);
	
	return(local_var);
}

int ProduceFactorial(int local_var)
{
	int factorial, num;
	factorial=1;
	
	for(num = local_var; num > 0; num--)
		factorial = factorial * num;
		
	return(factorial);
}

int Printdetails(int local_var)
{
	printf("The factorial is : %d\n", local_var);

	return;
}
	
int main()
{
	int integer, result;
	
	integer=Getnum();
	result=ProduceFactorial(integer);
	Printdetails(result);
		
	return(0);
}