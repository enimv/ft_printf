#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
    write (1, &c,1);
return (1);
}

int ft_putstr(char  *str)
{
    int i;

    i = 0;

    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
return (i);
}

int checkformat(char    c,va_list   arg)
{
    if (c == 'c')
        return (ft_putchar(va_arg(arg,int)));
    if  (c == 's')
        return (ft_putstr(va_arg(arg,char *)));
    if (c == 'd' || c == 'i')
        return (ft_putnbr(va_arg(arg,long)));
    return (0);
}

int ft_printf(const char *str, ...)
{
    int i;
    int ret;

    i = 0;
    ret = 0;
    va_list arg;

    va_start(arg, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            ret = ret + checkformat(str[i + 1], arg);
            i++;
        }
        else
            ret += ft_putchar(str[i]);
        i++;
    }
return(ret);
}

int main()
{
    ft_printf("hello %s \n","enima");

    printf("hello %s \n","enima");

    return(0);
}
