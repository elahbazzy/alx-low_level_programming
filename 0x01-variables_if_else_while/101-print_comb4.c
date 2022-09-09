#include <stdio.h>





/**





 * main - print possible combo of 3





 *





 * Return: returns zero at the end





 */





int main(void)





{





	int i, p, m;















	for (i = 0; i <= 9; i++)





	{





		for (p = 1; p <= 9; p++)





		{





			for (m = 2; m <= 9; m++)





			{





			if (m > p && p > i)





			{





				putchar(i + '0');





				putchar(p + '0');





				putchar(m + '0');





					if (i != 7)





				{





					putchar(',');





					putchar(' ');





				}





			}





			}





		}





	}





	putchar('\n');





	return (0);





}







12 



#include <stdio.h>





/**





 * main - print possible combination of two 2-digit





 * numbers





 *





 * Return: returns zero at the end





 */





int main(void)





{





	int i, p;















	for (i = 0; i < 100; i++)





	{





		for (p = 0; p < 100; j++)





		{





			if (p > i)





			{





				putchar((i / 10) + '0');





				putchar((i % 10) + '0');





				putchar(' ');





				putchar((p / 10) + '0');





				putchar((p % 10) + '0');





				if (i != 98)





				{





					putchar(',');





					putchar(' ');





				}





			}





		}





	}





	putchar('\n');





	return (0);





}



