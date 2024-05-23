/* Create a function that swaps the value of two integers whose addresses are entered as parameters. */

#include<unistd.h>

void    ft_swap(int *a, int *b)

{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}