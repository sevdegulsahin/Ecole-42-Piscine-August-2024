/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:18:17 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/03 11:25:13 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;
	int	j;

	a = 1;
	j = nb;
	if (power == 0)
		return (1);
	while (a < power)
	{
		j = j * ft_recursive_power(nb, power - 1);
		a++;
	}
	return (j);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(2,4));
}