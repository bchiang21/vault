// Create a function that converts every letter to uppercase.

#include <unistd.h>

char ft_strupcase(char *str)
{
    int i = 0;
    char c;

    while ((c = str[i]) != '\0')
    {
        if ((c >= 'a') && (c <= 'z'))
        {
            c = c - 32;
        }
        write(1, &c, 1);
        i++;
    }
}

int main(void)
{
    char x[] = "letyoudown";
    char y[] = "nEvErGoNnAgiveUp";

    ft_strupcase(x);
    ft_strupcase(y);
    
    return 0;
}