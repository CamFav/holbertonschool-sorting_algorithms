#include "sort.h"

/**
 * bubble_sort - sort array
 * @array : array
 * @size : size of the array
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
    size_t a = 0, z = 0;
    int tmp;

    if (!array)
        return;
    /* iterate throught the array */
    for (a = 0; a < size; a++) {
        /* compare adjacent elements */
        for (z = 0; z < size - a - 1; z++) {
            /* swap elements */
            if (array[z] > array[z + 1]) {
                tmp = array[z];
                array[z] = array[z + 1];
                array[z + 1] = tmp;
                print_array(array, size);
            }
        }
    }
}