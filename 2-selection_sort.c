#include "sort.h"

/**
 * selection_sort - function
 * @array: var
 * @size: var
 * Return: something or none
 */
void selection_sort(int *array, size_t size)
{
	int aux2 = 0;
	unsigned int i, j, j2, aux = 0;

	for (i = 0; i < size - 1; i++)
	{
		j2 = i;
		aux = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[j2])
			{
				j2 = j;
				aux = 1;
			}
		}

		if (aux != 0)
		{
			aux2 = array[i];
			array[i] = array[j2];
			array[j2] = aux2;

			print_array(array, size);
		}
	}
}
