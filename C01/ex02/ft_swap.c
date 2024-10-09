/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:05:34 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/25 16:51:03 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
int	main(void)

{

	int	a = 5;

	int	b = 10;


	printf("Before swap: a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);

	printf("After swap: a = %d, b = %d\n", a, b);


	return (0);

}
