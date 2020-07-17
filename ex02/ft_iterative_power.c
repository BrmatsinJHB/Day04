/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:45:12 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/17 13:04:29 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
	   write(1, &c, 1);
}

int   ft_iterative_power(int nb, int power);
int   main()
{ 
	 int power, nb, result;
	 printf(" -12");
	 scanf("%d", &power);
	 printf("-18(9)");
	 scanf("%d", &nb);
	 result = ft_iterative_power(power, nb);
	 printf("%d^%d", power, nb, result);
	 return 0;
}

int  ft_iterative_power(int power, int nb)
{
	if (nb != 0)
		return (power * ft_iterative_power(power, nb - 1));
	else
		return 1;
}
