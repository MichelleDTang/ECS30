/* Michelle Tang
 *
 * Write 5 questions with addition/subtraction
 * range:(1,20) for all numbers involved
 */


#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "random.h"
#include <time.h>

#define Questions 5

main()
{
	int i,r,n1,n2,tries,result,solution;
	srand(time(NULL));
	printf("Welcome to Math Quiz!\n");
	for(i=0; i < Questions;i++){
		n1 = RandomInteger(1,20);
		n2 = RandomInteger(1,n1-1);
		if(n1+n2>20){
			printf("What is %d - %d? ", n1, n2);
			result=GetInteger();
/*			if(n1-n2==result){	
				printf("That's the answer!\n");
			}
*/			for(tries=0;tries<2;tries++){
				if(n1-n2!=result){
				
					printf("That's incorrect. Try a different answer: ");
					result=GetInteger();
				}
			}
			if(n1-n2 == result){
				printf("That's the answer!\n");
			}
			if(n1-n2!=result){
				solution = n1 - n2;
				printf("No, the answer is %d.\n", solution);
			}
		}
		else if(n1-n2<1){
			printf("What is %d + %d? ", n1, n2);
			result=GetInteger();
/*			if(n1+n2==result){
				printf("That's the answer!\n");
			}
*/
			for(tries=0; tries < 2;tries++){
				if(n1+n2!=result){

					printf("That's incorrect. Try a different answer: ");
					result=GetInteger();
				}
			}
			if(n1+n2==result){
				printf("That's the answer!\n");
			}
			if(n1+n2!=result){
				solution = n1+n2;	
				printf("No, the answer is %d.\n", solution);
			}
		}	
		else{
			r= rand() % 2;
			if(r==1){
				printf("What is %d + %d? ", n1, n2);
				result=GetInteger();
/*				if(n1+n2==result){
					printf("That's the answer!\n");
				}
*/			
				for(tries=0; tries<2;tries++){
					if(n1+n2!=result){
						
					
					printf("That's incorrect. Try a different answer: ");
						result=GetInteger();	
					}
				} 
				if(n1+n2==result){
					printf("That's the answer!\n");
				}
				if(n1+n2!=result){
					solution = n1+n2;	
					printf("No, the answer is %d.\n", solution);
				}
			}
			else{
				printf("What is %d - %d? ", n1, n2);
				result = GetInteger();
/*				if(n1-n2==result){
					printf("That's the answer!\n");
				}
*/				
				for(tries=0;tries<2;tries++){
					if(n1-n2!=result){
						
						printf("That's incorrect. Try a different answer: ");
						result=GetInteger();	
					}
				}
				if(n1-n2==result){
					printf("That's the answer!\n");
				}
				if(n1-n2!=result){
					solution = n1-n2;
					printf("No, the answer is %d.\n",solution);
				}	
			}
		}
	}
}	
