/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:34:18 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/07 12:15:57 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(0));
// 	printf("%d\n", ft_recursive_factorial(1));
// 	printf("%d\n", ft_recursive_factorial(5));
// 	printf("%d\n", ft_recursive_factorial(10));
// }