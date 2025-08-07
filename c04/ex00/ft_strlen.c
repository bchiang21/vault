/*  Create a function that counts and returns the number of characters in a string. The function should be prototyped as follows:
int ft_strlen(char *str); */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int main(void)
{
    char *x = "supercalifragilisticexpielidocious";

    ft_strlen(x);

    char result = ft_strlen(x);

    while(result)
    {
        int i = 0;
    //printf("The string is: %d long", result);
    fflush(stdout);
    usleep(1000000);
    }
 

}
