
#include <unistd.h>

void ft_write(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        write(1, "3 arguments pls", 15);

        return 1;
    }

    int i;

    i = 1;
    while (i < argc)
    {
        ft_write(argv[i]);
        write(1, "\n", 1);
        i++;
    } 
return 0;
}