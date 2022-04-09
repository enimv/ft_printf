#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
    write (1, &c,1);
return (1);
}

int ft_putnbr(long nbr)
{
    int i;
    int ret;

    i = 0; 
    if (nbr >= 0 && nbr <= 9)
       i += ft_putchar(nbr + '0');
    else if (nbr < 0)
    {
       i += ft_putchar('-');
       i += ft_putnbr(nbr * (-1));
    }
    else if (nbr > 9)
    {
        i += ft_putnbr(nbr / 10);
        i += ft_putnbr(nbr % 10);
    }
return (i);
}

int    ft_alpha(long nbr)
{
   if (nbr == 10)
        ft_putchar('a');
    else if (nbr == 11)
        ft_putchar('b');
    else if (nbr == 12)
        ft_putchar('c');
    else if (nbr == 13)
        ft_putchar('d');
    else if (nbr == 14)
        ft_putchar('e');
    else if (nbr == 15)
        ft_putchar('f');
return (1);
}

int ft_lowhexa(long  nbr)
{
    int i;

    i = 0;
if (nbr >= 0 && nbr <= 9)
    i += ft_putnbr(nbr);
else if ( nbr >= 10 && nbr <= 15)
        ft_alpha(nbr);
if (nbr > 15)
{
    while (nbr / 16 >= 0)
    {
        ft_lowhexa(nbr % 16);
        if (nbr / 10 == 0)
            break;
        nbr /= 16;
    }
}
return (i);
}

int main()
{
    ft_lowhexa(5815);
}

