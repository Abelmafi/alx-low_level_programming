#include "main.h"
#include <stdio.h>
/**
 * _strstr - return te first occurance of string.
 * @haystack: the first staring
 * @needle: second sting to be searched
 * Return: pointer of string.
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0, flag = 0;

	if (*needle == '\0')
		return (NULL);
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			while (needle[j])
			{
				if (haystack[j] == needle[j])
				{
					j++;
					flag = 1;
				}
				else
				{
					flag = 0;
					j = 0;
					break;
				}
			}
		}
		if (flag == 1)
			break;
		haystack++;
	}
	if (flag == 0)
		return (NULL);
	else
		return (haystack);
}


