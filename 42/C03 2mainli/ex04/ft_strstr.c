/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevsahin <sevsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:45:16 by sevsahin          #+#    #+#             */
/*   Updated: 2024/09/02 12:11:42 by sevsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while ((str[i] != '\0') )
	{
		int j=0;
		while(str[i+j]==to_find[j]&& to_find[j]!='\0')
	{
		j++;
	}
	if(to_find[j] =='\0'){
		return &str[j];
	}
	i++; }
    return (0);

}
int	main(void)
{
	char a[9] = "ay selam";
	char b[3] = "se";

	printf("%s", ft_strstr(a, b));
}