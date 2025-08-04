#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] < 'A') || (str[i] > 'Z'))
        return 1;
        i++;
    }
        return 0;
}

int main(void)
{
char x[] = "nevergonnagiveyouup";

char y[] = "NEVERGONNALETYOUDOWN";

ft_str_is_uppercase(x);
ft_str_is_uppercase(y);

if (ft_str_is_uppercase(x)) 
  { 
    write(1, "1", 1); 
}
    else write(1, "0", 1);

if (ft_str_is_uppercase(y)) 
{
    write(1, "1" , 1); 
}

else write(1, "0", 1);

return 0;
}