/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** __DESCRIPTION__
*/

#include "../../inc/my.h"

int display_int(va_list lst)
{
    my_put_nbr(va_arg(lst, int));
    return (0);
}

int display_char(va_list lst)
{
    my_putchar(va_arg(lst, int));
    return (0);
}

int display_str(va_list lst)
{
    my_putstr(va_arg(lst, char*));
    return (0);
}
