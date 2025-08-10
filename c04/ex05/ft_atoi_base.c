/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:34:00 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/08 16:34:14 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//Check is_space

int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

//Check base legality

int check_base(char *base)
{
    int i, j;
    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
            return (0);
    
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
                j++;
        }
        i++;
    }
    return (i >= 2);
}

//Get index of char in base, -1 if no have
int base_index(char c, char *base)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == c)
        return (i);
        i++; 
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int sign;
    int result;
    int idx;
    int base_len;

    if (!check_base(base))
        return (0);

    base_len = 0;
    while (base[base_len])
    base_len++;

    //Skip whitespace
    while (is_space(*str))
        str++;

     // Handle sign
     sign = 1;
     while (*str == '+' || *str == '-')
     {
         if (*str == '-')
             sign = -sign;
         str++;
     }
 
     // Convert
     result = 0;
     while ((idx = base_index(*str, base)) != -1)
     {
         result = result * base_len + idx;
         str++;
     }
     return (result * sign);
 }


int main(void)
{

    char *s = "1A";
    char *b = "0123456789ABCDEF";

    ft_atoi_base(s, b);

    char result = ft_atoi_base(s, b);
    printf("%d", result);

}
