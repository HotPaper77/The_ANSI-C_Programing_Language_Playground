#include <stdio.h>


int main(int argc, char const *argv[])
{
	printf("Hello, \f world\n");
	return 0;
}

/* The \f escape adds an entire line to the string => error is is a formfeed, 
one way to mark a page break */