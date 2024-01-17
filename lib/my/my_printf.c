/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** __DESCRIPTION__
*/

#include "../../inc/my.h"

int my_printf(char *format, ...)
{
    int i;
    int j = 0;
    va_list lst;
    va_start(lst, format);
    char ref[8] = "scidbxXo";
    int (*print[8])(va_list lst) = {display_str, display_char,
                                    display_int, display_int, display_bin,
                                    display_hexa, display_HEXA, display_octal};

    for (i = 0; format[i]; i++) {
        if (format[i] == '%') {
            while (ref[j] != format[i + 1])
                j++;
            print[j](lst);
            i++;
        }
        else
            my_putchar(format[i]);
    }
    va_end(lst);
    return (0);
}
//strlowcase %S 
