#include "lists.h"

void meFirst(void) __attribute__ ((constructor));

/**
 * meFirst - executes before int main
 *
 * Returns: Nothing
 */

void meFirst(void)
{
	 printf("You're beat! and yet, you must allow,\n
			 I bore my house upon my back!\n");
}
