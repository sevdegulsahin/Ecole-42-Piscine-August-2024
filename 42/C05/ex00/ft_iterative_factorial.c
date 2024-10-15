/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:26:33 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/03 10:39:17 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int a=1;
	if(nb<0)
	 return (0);
	while(nb>0)
	{
		a*=nb;
		nb--;
	}
	return (a);
}
int main()
{
	
	printf("%d",ft_iterative_factorial(-5));
}