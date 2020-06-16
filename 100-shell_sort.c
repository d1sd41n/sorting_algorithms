#include "sort.h"

/**
 * shell_sort - function
 * @array: var
 * @size: va
 * Return: something or none
 */
void shell_sort(int *array, size_t size)
{
	size_t batch, pos, aux;
	int aux2;

	if (array == NULL || size < 2)
		return;

	for (batch = 1; batch < size; batch = batch * 3 + 1)
		;
	batch = (batch - 1) / 3;

	for (batch = batch; batch; batch = (batch - 1) / 3)
	{
		pos = batch;
		while (pos < size)
		{
			aux2 = array[pos];
			aux = pos;
			pos++;
			while (aux > batch - 1 && array[aux - batch] > aux2)
			{
				array[aux] = array[aux - batch];
				aux = aux - batch;
			}
			array[aux] = aux2;
		}
		print_array(array, size);
	}
}
