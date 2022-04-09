#include <stdio.h>
#include <unistd.h>
// int intlen(long nbr)
// {
//     int i;

//     i = 1;
//     if (nbr > 0)
//         i++;
//     while (nbr % 10 != 0)
//     {
//         nbr = nbr / 10;
//         i++;
//     }
// return (i);
// }
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

int main()
{
    int a = 0;
    int i = 0;
    
    a = ft_putnbr(-6);
    printf("\n");
    i = printf("%d",-6);

    printf("\n%d\n%d\n", a, i);
   // printf("%d",intlen(458));
}