#include <stdio.h>
#include  <unistd.h>
int ft_putchar(char c)
{
    write (1, &c,1);
return (1);
}

int ft_uint(unsigned int nbr)
{
    int i;

    i = 0;
    if (nbr >= 0 && nbr <= 9)
    i += ft_putchar(nbr + 48);
    else if (nbr < 0)
    {
        i += ft_putchar('-');
        i += ft_uint(nbr * (-1));
    }
    else
    {
        i += ft_uint(nbr /10);
        i += ft_uint(nbr % 10);
    }
return (i);
}

int main()
{
    int me = 0;
    int sys = 0;

    // sys = printf("%u",4294967295);
    // printf("\n");
//     me = ft_uint(4294967295);
//     printf("\n%d\n%d\n",sys,me);
printf("%x",1060);
 }
