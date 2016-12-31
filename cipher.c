/* Michelle Tang
 *
 * Write a function that encodes upper and lower case letters only.
 */

#include <stdio.h>
#include "genlib.h"
#include "strlib.h"
#include "simpio.h"
#include "string.h"

string EncodeString(string str, int key);

main()
{
	int k;
	char s[9999] = {0};
	printf("This program encodes a message using a cyclic cipher.\n");
	printf("Enter the numeric key: ");
	k = GetInteger();
	k %= 26;
	printf("Enter a message: ");
	fgets(s, 9999, stdin);
	EncodeString(s, k);
	printf("Encoded message: %s", s);
}

string EncodeString(string str, int key){
	int i, c;
	for(i=0; i < StringLength(str);i++){
		c = (int)str[i];
		if(c <= 90 && c >= 65){
			c += key;
			if(c > 90){
				c -=26;
			}
			if(c < 65){
				c += 26;
			}
			str[i] = (char) c;
		}
		else if(c <= 122 && c>=97){
			c += key;
			if(c > 122){
				c -= 26;
			}
			if(c < 97){
				c += 26;
			}
			str[i] = (char) c;
		}
		else{
			str[i] = (char) c;
		}		
	}
	return str;	
}	
