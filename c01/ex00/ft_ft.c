/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:21:19 by bchiang           #+#    #+#             */
/*   Updated: 2025/07/28 13:13:52 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

void	ft_putnbr(int n)
{
    //write a recursion to output the digit 42
    if (n < 10)
    {
       char digit = n + '0';
       write(1, &digit, 1);
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        char digit = ((n % 10) + '0');
        write(1, &digit, 1);
    }
}

/* int main(void)
{
  int x;
  ft_ft(&x);
  ft_putnbr(x);
  write(1, "\n", 1);

  return 0;
}
  */
