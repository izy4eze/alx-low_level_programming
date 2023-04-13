#include "search_algos.h"

/**
 * Linear_search _ function that searches for a value in giben list
 * of arrays of integers using the linear search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: value to search for in the array
 *
 * Return: The first index where value is located
 * 0r - 1 if the value is not found or if array is NULL
 */

int  linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[] == value)
			{
				return (i);
			}
		}
	}
	return (-1)
}
