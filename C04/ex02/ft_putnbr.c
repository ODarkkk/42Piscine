/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:31:46 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/05 10:55:38 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
}

// int	main(void)
// {
// 	ft_putnbr(42);
// 	ft_putchar('\n');
// 	ft_putnbr(-42);
// 	ft_putchar('\n');
// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');
// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');
// 	ft_putnbr(5);
// 	return (0);
// }