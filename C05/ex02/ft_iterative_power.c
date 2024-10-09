/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:41:55 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/03 12:05:08 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	i = 1;
	nbr = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= nbr;
		i++;
	}
	return (nb);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_iterative_power(2, 3));
// 	printf("%d\n", ft_iterative_power(2, -3));
// }