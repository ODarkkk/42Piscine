/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:30:27 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/30 14:11:20 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
// #include  <stdio.h>
// int  main(void)
// {
//     printf("%d\n", ft_str_is_numeric("0123456789"));
//     printf("%d\n", ft_str_is_numeric("01234567890"));
//     printf("%d\n", ft_str_is_numeric("01234567890a"));
//     printf("%d\n", ft_str_is_numeric(""));
//     printf("%d\n", ft_str_is_numeric("a"));
//     return (0);
// }