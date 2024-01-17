/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** __DESCRIPTION__
*/

#include "../../inc/my.h"

int my_put_octal(int nb)
{
    if (nb <= 8) {
        my_putchar(nb % 8 + 48);
    } else {
        my_put_octal(nb / 8);
        my_putchar(nb % 8 + 48);
    }
    return (0);
}

int my_put_hexa(int nb)
{
    char *base = "0123456789abcdef";

    if (nb < 16) {
        my_putchar(base[nb % 16]);
    } else {
        my_put_hexa(nb / 16);
        my_putchar(base[nb % 16]);
    }
    return (0);
}

int my_put_HEXA(int nb)
{
    char *base = "0123456789ABCDEF";

    if (nb < 16) {
        my_putchar(base[nb % 16]);
    } else {
        my_put_HEXA(nb / 16);
        my_putchar(base[nb % 16]);
    }
    return (0);
}
