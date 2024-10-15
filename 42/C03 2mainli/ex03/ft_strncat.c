/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:34:35 by sevsahin          #+#    #+#             */
/*   Updated: 2024/08/21 18:42:32 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *dest_ptr;

	dest_ptr = dest;

	while (*dest_ptr)
	{
		dest_ptr++;
	}

	while (*src && 0<nb)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		nb--;
	}

	*dest_ptr = '\0';

	return (dest);
}
int main()
{
	char a[]="selam";
	char b[]="merhaba";
	printf("%s",ft_strncat(a,b,3));
}