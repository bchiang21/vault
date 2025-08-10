/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:30:06 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/08 16:31:33 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}


#include <stdio.h>
#include <unistd.h>

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
