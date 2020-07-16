/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:25:33 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/16 12:18:30 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
	  write(1, &c, 1);
}

int     ft_iterative_factorial(int nb)
{
	  int nq;
	  int ng;
	  nq = '5';
	  ng = '3';
      nq / ng == nb;

	  if ( nq / ng == nb)
	  {
		  ft_iterative_factorial(nb);
		  return (0);
	  }
	  else 
	  {   
		  return (0);
	  }
}

int   main()
{
	ft_iterative_factorial(4);
	printf("%d  %d", ft_iterative_factorial(15));
	return (0);
}
