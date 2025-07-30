/* Create a function that counts and returns the number of characters in a string.
The function should be prototyped as follows:
int ft_strlen(char *str);
*/

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;

}

int main(void)
{
    int len = ft_strlen("LifeAnswerUniverse");

    printf("%d", len);

    return(0);
}