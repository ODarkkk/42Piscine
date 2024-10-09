/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:27:19 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/07 13:55:09 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 1;
	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n",  ft_iterative_factorial(0));
// 	printf("%d\n",  ft_iterative_factorial(1));
// 	printf("%d\n",  ft_iterative_factorial(2));
// 	printf("%d\n",  ft_iterative_factorial(3));
// 	printf("%d\n",  ft_iterative_factorial(4));
// 	printf("%d\n",  ft_iterative_factorial(5));
// }
