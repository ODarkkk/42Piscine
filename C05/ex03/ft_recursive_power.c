/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:51:13 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/03 12:05:31 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(2, 3));
// 	printf("%d\n", ft_recursive_power(2, 0));
// 	printf("%d\n", ft_recursive_power(2, -1));
// }
