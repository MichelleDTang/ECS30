/* Michelle Tang 
 * convert from one type of currency to another given the exchange rate
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

#define fileinput "exchange.dat"
#define TRUE 1

main()
{
	double ex, amt, worth;
	char *infile, name[5][2]; 
	string from, to, money;
	FILE *file;
	int fill, i, j;
	file = fopen(fileinput, "r");
	
	printf("Convert from: ");
	from = GetLine();
	printf("Convert into: ");
	to = GetLine();
	printf("How many units of type %s? ", from);
	amt = GetReal();
	printf("%g %s = \n", amt, from);
}
