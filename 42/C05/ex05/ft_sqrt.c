/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:35:27 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/03 12:00:41 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long index;
	long b;
	b=nb;
	if(b<=0)
	 return (0);
	 if(b==1)
	 return (1);
	 if(b>=2)
	 {
		while(index*index <=b)
		{
			if(index*index ==b)
			{
				return (index);
			}
			index++;
		}
	 }
	 return (0);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_sqrt(1));
}