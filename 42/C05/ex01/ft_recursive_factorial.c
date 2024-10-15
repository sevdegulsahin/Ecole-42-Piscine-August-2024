/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:39:49 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/03 10:49:12 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	if(nb ==1 || nb==0)
	    return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}
int	main(void)
{
	printf("%d", ft_recursive_factorial(1));
}