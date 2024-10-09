/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:41:39 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/23 17:23:41 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	swap = 0;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab [size - 1];
		tab[size - 1] = swap;
		size--;
		i++;
	}
}
// int	main(void)
// {
// 	int tab[] = {0, 1, 2, 3, 4, 5};
// 	int size;
// 	int i;

// 	i = 0;
// 	size = 6;
// 	ft_rev_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
