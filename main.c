#include <stdio.h>
#include "ft_printf.h"

int main()
{
    char s[] = "ilyas";
    char c[] = "güney";
    printf("%x %x\n", s, c);
    ft_printf("%x %x\n", s, c);
}