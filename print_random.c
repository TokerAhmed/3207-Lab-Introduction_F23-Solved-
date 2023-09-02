#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"


int main()
{
	int a; //declare a integer variable a 

	// seed the randomizer
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");

	//using a for loop to get seven  random characters from our randchar() function
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

