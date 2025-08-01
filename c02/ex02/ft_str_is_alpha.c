/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:45:14 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 14:46:02 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Create a function that returns 1 if the given string contains only alphabetical characters and 0 if it contains any other character.
Here is how it should be prototyped: int ft_str_is_alpha(char *str); It should return 1 if str is empty
*/

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while ( str[i])
    {
        if (!((str[i] >= 'A' && str[i] <= 'z') || (str[i] >= 'a' && str[i] <= 'z' )))
        return 0;
    i++;
    }   
    return 1;
}

#include <stdio.h>
int main(void)
{

   char x[]="LetThereBeLight";
    char y[]="L3tTh3r3B3Light";

    ft_str_is_alpha(x);
    ft_str_is_alpha(y);

    printf("This is alpha - %d \n", ft_str_is_alpha(x));
    printf("This is not - %d", ft_str_is_alpha(y));

}

