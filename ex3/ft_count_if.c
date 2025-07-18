#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    int i = 0;
    while (str[i])
        ft_putchar(str[i++]);
}

void ft_putnbr(int n) {
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

void ft_putarr(int *n, int size) {
    int i = 0;
    while (i < size) {
        ft_putnbr(n[i]);
        ft_putchar('\n');
        i++;
    }
}







int     ft_count_if(char **tab, int length, int (*f)(char *))
{
    int     count;
    int     i;

    count = 0;
    i = 0;
    while (i < length)
    {
        if (f(tab[i]) != 0)
            count++;
        i++;
    }
    return count;
}