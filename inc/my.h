/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** __DESCRIPTION__
*/


#ifndef MY_H_
# define MY_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    my_putchar(char c);
char    *my_revstr(char *str);
int my_printf(char *format, ...);
int display_int(va_list lst);
int display_char(va_list lst);
int display_str(va_list lst);
int display_bin(va_list lst);
int display_hexa(va_list lst);
int display_HEXA(va_list lst);
int display_octal(va_list lst);
int my_put_nbr(int nb);
int my_put_octal(int nb);
int my_put_hexa(int nb);
int my_put_HEXA(int nb);
void    my_putstr(char *str);
int main(void);

#endif
