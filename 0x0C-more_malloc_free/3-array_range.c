#include "main.h"

/**
 * array_range - create an array of values from min to max
 * @min: lowest value
 * @max: the highest value
 *
 * Return: Pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int j, i, len, *arr;

	len = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		len++;
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j <= len && min <= max; j++, min++)
		arr[j] = min;
	return (arr);
}
