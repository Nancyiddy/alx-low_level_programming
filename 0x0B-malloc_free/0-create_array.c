#include "main.h"

/**
 * create_array - create an array an intialize it with a specified character
 *
 * @size: size of the array
 * @ch: character to initialize the array
 *
 * Return: NULL if size is 0 or fails to allocate memory,
 *		otherwise pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
