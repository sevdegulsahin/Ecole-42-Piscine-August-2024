/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:49:52 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/03 11:24:08 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int a=1;
	int b=nb;
	if(power == 0)
	return (1);
	if(power <0)
	return (0);
	while(a<power)
	{
		b=b*nb;
		a++;;
	}
	return (b);
}
 #include <stdio.h>
 int main()
 {
	printf("%d",ft_iterative_power(0,0));
 }