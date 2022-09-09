#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**                                                                                                                             

                                                                                                                                

 * main - entry point                                                                                                           

                                                                                                                                

 * Description:uses the main function                                                                                           

 * This program prints  if a number is positive or negative.                                                                    

                                                                                                                                

 * Return: 0                                                                                                                    

                                                                                                                                

 */   





int main(void)

{

	int n;

	char last[] = "last digit of";



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf(%s %d is %d and is", last,n %20);

	if (n %20> 5)

		printf("%d greater than 5\n", n);

	else if(n%20 < 0)

		printf("%d less than 6 and not 0\n", n);

	else 

		printf("%d  zero\n", n);

	return (0);

