/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:48:15 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/13 21:48:34 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int result = 1;

    if (nb == 0 && power == 0)
    {
      return 1;
    }

   if (power < 0)
    {
      return 0;
    }

    while (power)
    {
      result = result * nb;
      power--;
    }
    return result;
}

int my_atoi(char *c)
{
  int i = 0;
  int result = 0;

  while (c[i])
  {
  result = (result * 10) + (c[i] - '0');
  i++;
  }
  return result;
}

#include <stdio.h>
#include <unistd.h>
int main(int argc, char** argv)
{
  int x;
  int y;

  if (argc != 3)
  {
    write(1, "oi, enter two values",20);
    return 0;
  }

  x = my_atoi(argv[1]);
  y = my_atoi(argv[2]);


    int final  = ft_iterative_power(x, y);

    printf("%i", final);
}
