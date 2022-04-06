#include <stdio.h>
int intlen(long nbr)
{
    int i;

    i = 0;
    if (nbr < 0)
        i++;
    while (nbr % 10 != 0)
    {
        nbr = nbr /10;
        i++;
    }
return (i);
}
int ft_putnbr(long nbr)
{
    int i;

    i = 0;
    if (nbr >= 0 && nbr <= 9)
        putchar(nbr + '0');
    else if (nbr < 0)
    {
        putchar('-');
        ft_putnbr(nbr * (-1));
    }
    else if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
return (intlen(nbr));
}

int main()
{
    int a = 0;
    int i = 0;
    
    a = ft_putnbr(-0);
    printf("\n");
    i = printf("%d",-0);

    printf("\n%d\n%d\n", a, i);
   // printf("%d",intlen(458));
}