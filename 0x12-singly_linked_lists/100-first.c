#include <stdio.h>
#include "lists.h"
/**
 * myStartupFun - function to be excuted before main function.
 *
 * Return: Always 0.
 */
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}
