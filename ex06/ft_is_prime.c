/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:07:52 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/03 12:59:56 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(2));
// 	printf("%d\n", ft_is_prime(3));
// 	printf("%d\n", ft_is_prime(4));
// 	printf("%d\n", ft_is_prime(5));
// 	printf("%d\n", ft_is_prime(6));
// 	return (0);
// }