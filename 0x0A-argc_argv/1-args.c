#include <stdio.h>


/*
 * main- a program to print 
 * number of arguments pass to it
 * Argc and argv concept.
 * return 0 after compilation.
 */

int main(int argc, char**argv){

	(void)argc;
	printf("%s\n", argc-1);
	return 0;

	

}

