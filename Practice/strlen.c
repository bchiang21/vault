#include <stdio.h>
//simple code to concatenate
// Create an iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.
char *ft_cat(char *src, char *dest)
{
    int i = 0;
    int j = 0;

    while (dest[i])
    {
        i++;
    }
    while (src[j])
    {
        dest[i] = src[j];
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{

    char result;
    char *x = "string source";
char y[] = "string dest";

ft_cat(x, y);

printf("%s, %s",x, y);

}