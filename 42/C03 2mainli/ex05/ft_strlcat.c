/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:39:11 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/02 10:08:22 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlen(char *str)
{
	unsigned int i;
	i=0;
	while(str[i])
	i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int		res_d;
	unsigned int res_s;

	i=ft_strlen(dest);
	j=0;
	res_d=ft_strlen(dest);
	res_s=ft_strlen(src);
	if(size<1)
	return (res_s+size);
	while(src[j]&&i<size-1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	if(size < res_d)
	return (res_s + size);
	else 
	return (res_d + res_s);
	
}
int	main(void)
{
char 	dest[50] = "selam";
char 	src[50] = "cnm";
	printf("%u", ft_strlcat(dest, src, 2));
	
}
