#include<stdio.h>

int ft_print_numbers    (void)
{
    char    a;


    a = '0';
    while (a <= '9')
        {
            write(1, &a, 1);
            a ++;
        }
}

int main (void)
{
    ft_print_numbers();
}