#include <stdio.h>

/**
*main - printing string from the puts function
*Description- from the main function
*returns 0
*/

int main (void)
	{ char c;
	  int i;
	  long lo;
	  long long llo;
	  float f;

	 printf("size of a char: %1d byte(s)\n", sizeof(c));
	 printf("size of an int: %1d byte(s)\n", sizeof(i));
	 printf("size of a long: 1% byte(s)\n", sizeof(lo));
	 print("size of a long long int: 1% byte(s)\n", sizeof(llo));
	 print("size of a flaot: %1d byte(s)\n", sizeof(f));
	 return (0);
