/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:22:27 by sevsahin          #+#    #+#             */
/*   Updated: 2024/08/22 11:47:54 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *dest_ptr;

	dest_ptr = dest;

	while (*dest_ptr)
	{
		dest_ptr++;
	}

	while (*src)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}

int	main(void)
{

	char a[100] = "selam";
	char b[] = "merhaba";
	printf("%s\n", ft_strcat(a, b));
	return (0);
}
