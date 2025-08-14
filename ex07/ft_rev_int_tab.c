/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:44:52 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/14 21:16:15 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swp;
	int	index;

	index = 0;
	while (index != size / 2)
	{
		swp = tab[size - index - 1];
		tab[size - index - 1] = tab[index];
		tab[index] = swp;
		index++;
	}
}

/*
#include <unistd.h>

int	main(void)
{
	int		tab1[5] = {0, 1, 2, 3, 4};
	int		i;
	char	c;

	i = 0;
	while (i < 5)
	{
		c = tab1[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	ft_rev_int_tab(tab1, 5);
	i = 0;
	while (i < 5)
	{
		c = tab1[i] + 48;
		write(1, &c, 1);
		i++;
	}
}
*/