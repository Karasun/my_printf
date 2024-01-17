/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** __DESCRIPTION__
*/

#include "../../inc/my.h"

int display_bin(va_list lst)
{
    int nb = va_arg(lst, int);
    char *tab = malloc(sizeof(char)*33);
    int n = 0;
    int b = 0;

    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    while (nb != 0) {
        b = nb % 2;
        tab[n] = b + 48;
        nb = nb / 2;
        n++;
    }
    tab[n] = '\0';
    my_putstr(my_revstr(tab));

    return (0);
}

int display_hexa(va_list lst)
{
    my_put_hexa(va_arg(lst, int));
    return (0);
}

int display_HEXA(va_list lst)
{
    my_put_HEXA(va_arg(lst, int));
    return (0);
}

int display_octal(va_list lst)
{
    my_put_octal(va_arg(lst, int));
    return (0);
}
