#include "main.h"

/**
 * count_all - counts the number of uppercase and lowercase letters,
 *		   as well as the number of other characters
 * @str: string to count the number of letters and other characters
 *
 * Return: Always 0
 */

int count_all(char *str)
{
	int i, c_u = 0, c_l = 0, c_o = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			c_u++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			c_l++;
		else
			c_o++;
	}

	printf("Uppercase: %d, Lowercase: %d, Others: %d\n", c_u, c_l, c_o);

	return (0);
}
