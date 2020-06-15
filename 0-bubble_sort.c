#include "sort.h"

/**
 * bubble_sort - function
 * @array: var
 * @size: var
 * Return: something or none
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int aux;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j + 1 < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
