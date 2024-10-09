/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:00:03 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/25 16:33:39 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *a / *b;
	*b = c % *b;
	// printf("%d%d", &a, &b);
}

int	main(void)
{
	int a = 10;
	int b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d%d", a, b);
	return 0;
}
