/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:22:37 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/16 13:10:41 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void     ft_putchar(char c)
{
	    write(1, &c, 1);
}

int     ft_recursive_factorial(int nbr)
{
	 if (nbr <= 1)
     {
         return 1;
     }
    
	  else
      {
      return nbr * ft_recursive_factorial(nbr - 1);
    
	  }
	  
}

int    main()
{
    int n;
    n = ft_recursive_factorial(10);
    printf("%d\n", n);
	return (0);
}
