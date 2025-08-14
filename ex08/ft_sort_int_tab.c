/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:03:03 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/14 21:16:44 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bubulle(int *bulle, int *tab, int *size)
{
	int	index;
	int	swp;

	index = 0;
	while (index < *size - *bulle - 2)
	{
		if (tab[index] > tab[index + 1])
		{
			swp = tab[index + 1];
			tab[index + 1] = tab[index];
			tab[index] = swp;
		}
		else
			index++;
	}
	(*bulle)++;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	swp;
	int	bulle;

	bulle = 0;
	while (bulle < size - 1)
	{
		bubulle(&bulle, tab, &size);
	}
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	int tab[] = {5, 2, 1, 5, 0};
// 	int index;
// 	int size = 6;
// 	for (int i = 0; i < size - 1; i++)
// 		printf("%u", tab[i]);
// 	ft_rev_int_tab(tab, size);
// 	printf("\n");
// 	for (int i = 0; i < size - 1; i++)
// 		printf("%u", tab[i]);
// 	return (0);
// }