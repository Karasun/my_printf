/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** __DESCRIPTION__
*/

#include "../../inc/my.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    if (nb < 10) {
        my_putchar(nb % 10 + 48);
    } else {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return (0);
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char    *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    int res = 0;
    char tmp;

    while (i > res + 1 / 2) {
        tmp = str[res];
        str[res] = str[i];
        str[i] = tmp;
        i--;
	res++;
    }
    return (str);
}
