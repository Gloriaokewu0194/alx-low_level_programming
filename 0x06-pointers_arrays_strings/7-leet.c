#include "main.h"

/**
 * leet - a leet function
 * @n: param n
 * Return: a string
 */
char *leet(char *n)
{
	int i, j;
	char s1[5] = {'A', 'E', 'O', 'T', 'L'};
	char s2[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j] || n[i] - 32 == s1[j]
				n[i] = s2[j];

		}
	}
	return (n);
}
