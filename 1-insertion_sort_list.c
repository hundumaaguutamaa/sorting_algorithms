#include "sort.h"
/**
* insertion_sort_list - Insertion sorting algorithm. 
* @list: a linked list to sort. 
*
*/

void insertion_sort_list(listint_t **list)
{
    listint_t *tmp;
    int i;
    int swapped;

    if (!list)
        return;

    do
    {
        swapped = 0;
        tmp = *list;

        while (tmp && tmp->next)
        {
            if (tmp->i > tmp->next->i)
            {
                i = tmp->i;
                *(int *)&tmp->i = tmp->next->i;
                *(int *)&tmp->next->i = i;
                print_list(*list);
                swapped = 1;
            }
            tmp = tmp->next;
        }
    } while (swapped);
}

