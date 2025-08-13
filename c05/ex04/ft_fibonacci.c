/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:54:17 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/13 21:54:32 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
 

   if (index < 0)
   {
    return 0;
   }

   if (index == 0)
   {
    return 1;
   }

   return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}


#include <stdio.h>

int main(void)
{

    int x = 5;

    printf("%i", ft_fibonacci(x));

}
