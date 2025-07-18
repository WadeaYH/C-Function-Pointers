#include <unistd.h>
#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
    int     i;
    int *array = malloc(sizeof(int) * length);

    i = -1;
    while (i++ < length)
            array[i] = f(tab[i]);
    return (array);
}