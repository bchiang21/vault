#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    while (i < n)
    {
        if ((s1[i] != s2[i]) || !s1[i] || !s2[i])
        return (s1[i] - s2[i]);
        i++;
    }
    return 0;
}

int main(void)
{
    unsigned int n = 11;
    char *x = "stringone";
    char *y = "stringOne";

    int result = ft_strncmp(x, y, n);

    int c; 

    if ((result < 0))
        c = '-';
    else if ((result > 0))
        c = '+';
    else c = '0'; 

    write(1, &c, 1);
    write(1, "\n", 1);

    return 0;
}