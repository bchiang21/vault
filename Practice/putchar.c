#include <unistd.h>

void ft_putchar(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
}
}

int main(void)
{
char x[] = "nevergonnagive";

ft_putchar(&x[0]);
    return 0;
}