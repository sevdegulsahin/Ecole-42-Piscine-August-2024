/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcarbuga <kcarbuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:07:50 by kcarbuga          #+#    #+#             */
/*   Updated: 2024/08/18 12:20:19 by kcarbuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x, int a, int b, int c)
{
	int	i;

	i = 0;
	if (x >= 1)
		ft_putchar(a);
	while (i < (x - 2))
	{
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y >= 1 && x >= 1)
		ft_line(x, '/', '*', '\\');
	while (i < y - 2 && x >= 1)
	{
		ft_line(x, '*', ' ', '*');
		i++;
	}
	if (y >= 2 && x >= 1)
	{
		ft_line(x, '\\', '*', '/');
	}
}
