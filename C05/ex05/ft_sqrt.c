/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:09:53 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/05 17:18:31 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <math.h>
// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(10));
// 	printf("%d\n", ft_sqrt(16));
// 	printf("%d\n", ft_sqrt(20));
// 	printf("%d\n", ft_sqrt(25));
// 	return (0);
// }