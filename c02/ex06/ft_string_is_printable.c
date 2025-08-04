/* create a function that returns 1 if the string given as parameter contains only 
printable characters and 0 if it contains any other character */

#include <unistd.h>

int ft_is_printable(char *string)
{
    int i = 0;
    while (string[i])
    {
        if ((string[i] < 32) || (string[i] > 127))
        return 0;
        i++;
    }
    return 1;
}

int main(void)
{
    char x[] = "NeverGonnaLetYouNull";
    char y[] = "null\n\a\b\t";

    ft_is_printable(x);

    if (ft_is_printable(x))
    {
        write(1,"1\n",2);
    }
    else
    {
        write(1, "0\n", 2);
    }

     ft_is_printable(y);

     if (ft_is_printable(y))
    {
        write(1,"1\n",2);
    }
    else
    {
        write(1, "0\n", 2);
    }

    return 0;
}