#include <stdio.h>
#include "main.h"

/**
*main - prints the name of the program
*@argc - number of the arguments
*@argv - array of the arguments
*
*Return - Success always (0)
*/

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
