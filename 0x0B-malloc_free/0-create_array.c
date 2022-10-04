#include <stdlib.h>
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
	char *buffer;
	unsigned int position;

	if (size ==0)
	{
	return (NULL);
	}
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer ==0)
	{
	return (NULL);
	}

	else 
	{
	position = 0;
	while (position < size)
	{
	*(buffer + position) = c;
	position++;
	}

	return (buffer);
}

