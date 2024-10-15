/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:04:21 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/03 12:11:39 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{   int i=2;
    int b=nb;
	if(nb==0 || nb==1)
	return (0);
	
		while(i<=(b/2))
		{
			if(b%i==0)
			 return (0);
			 else 
			 i++;
			
		
	}
	return (1);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_is_prime(2));
}