/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:03:42 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/03 12:07:03 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_fibonacci(10));
// 	printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(-1));
// 	return (0);
// }
