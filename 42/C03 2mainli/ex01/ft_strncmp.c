/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:08:30 by sevsahin          #+#    #+#             */
/*   Updated: 2024/08/22 11:44:29 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && (*s1 == *s2) && n>0)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 == *s2)
		return (0);
	if (*s1 > *s2)
		return (1);
	else
		return (-1);
}
int main()
{
	char a[]="selam";
	char b[]="selam";
	
	printf("%d",ft_strncmp(a,b,2));
}

