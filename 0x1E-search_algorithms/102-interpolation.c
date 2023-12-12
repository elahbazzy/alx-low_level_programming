#include "search_algos.h"
 
/**
  * interpolation_search - Searches for a value in a sorted array of integers using interpolation search.
  *
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
      size_t l, m, r;

      if (array != NULL && size > 0)
      {
            l = 0;
            r = size - 1;
            while (array[l] != array[r])
            {
                  m = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
                  if (m < l || m > r)
                  {
                      printf("Value checked array[%lu] is out of range\n", m);
                      break;
                  }
                  printf("Value checked array[%lu] = [%d]\n", m, array[m]);
                  if (array[m] < value)
                    l = m + 1;
                  else if (array[m] > value)
                    r = m - 1;
                  else
                    return (m);
            }
      }
      return (-1);
}
