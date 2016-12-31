/*Michelle Tang
 *
 * File:average.c
 * --------------
 *  Write a program that takes in numbers until -1 is input and then average
 *  out the numbers.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{	
	float total, value, count, average;

	printf("This program averages a list of integers.\n");
	printf("Enter -1 to signal the end of the list.\n");
	total = 0;
	count = 0;
	while(1) 
	{
		printf("? ");
		value = GetInteger();
		if (value == -1) break;
		else
		{
		total += value;		
		count += 1;	
		}
	average = total/count;
	}
	printf("The average is %g\n", average);
}
