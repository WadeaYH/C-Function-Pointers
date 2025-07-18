#include <unistd.h>
#include <stdlib.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int     i;
    int     ascending;
    int     descending;

    ascending = 1;
    descending = 1;
    i = 0;
    while (i < length - 1)
    {
        if (f(tab[i], tab[i + 1]) > 0)
            ascending = 0;
        if (f(tab[i], tab[i + 1]) < 0)
            descending = 0;
        i++;
    }
    if (ascending || descending)
        return (1);
    return (0);
}