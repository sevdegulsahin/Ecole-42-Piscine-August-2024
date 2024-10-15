/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:26:23 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/03 11:34:30 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{    if(index <0)
       return (-1);
	   if(index==0)
	   return (0);
	   if(index ==1)
	   return (1);
	
	 return (ft_fibonacci(index -1)+ ft_fibonacci(index -2));
}
#include <stdio.h>
int main()
{
	printf("%d",ft_fibonacci(7));
}