#include "utils.h"
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void quick_sort(int arrays[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int i = low;
    int j = high;
    int key = arrays[low];
    while (low < high)
    {
        while (low < high && key <= arrays[high])
            --high;
        if (key > arrays[high])
        {
            swap(&arrays[low], &arrays[high]);
            ++low;
        }
        if (key < arrays[low])
        {
            swap(&arrays[low], &arrays[high]);
            --high;
        }
    }
    quick_sort(arrays, i, low - 1);
    quick_sort(arrays, low + 1, j);
}
void sort(int arrays[], int length)
{
    quick_sort(arrays, 0, length);
}
