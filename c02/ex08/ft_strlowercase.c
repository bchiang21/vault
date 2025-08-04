/* Create a function that converts every letter to lowercase */

#include <unistd.h>

char ft_strlowercase(char *str)
{
    int i = 0;
    int c;

    while ((c = str[i]))
    {
        if (c >= 'A' && c <= 'Z')
        {
            str[i] = c + 32;
        }
        i++;
    }
    return 1;
}

/* char ft_putchar(char c[])
{
    int i = 0;
    while (c[i])
    {
    write(1, &c, 1);
    }
} */

int main(void)
{
    char x[] = "NEVERGONNATELLALIE";
    char y[] = "aNdHuRtYoU";

    ft_strlowercase(x);
    ft_strlowercase(y);

    if (ft_strlowercase(x))
    {
        int i = 0;
        while (x[i])
    {
        write(1, &x[i], 1);
        i++;
    }
    
}

if (ft_strlowercase(y))
    {
        int i = 0;
        while (y[i])
    {
        write(1, &y[i], 1);
        i++;
    }
    
}
return 0;
}