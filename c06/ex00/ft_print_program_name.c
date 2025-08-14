
#include <unistd.h>

void ft_write(char* str)
{
    while (*str)
    {
    write(1, str, 1);
    str++;
    }
}

int main(int argc, char** argv)
{
    ft_write(*argv);
    write(1, "\n" ,1);
}