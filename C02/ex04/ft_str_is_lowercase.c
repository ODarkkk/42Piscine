/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:39:04 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/30 14:38:18 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "azertyuiop";
// 	char str2[] = "AZERTYUIOP";
// 	char str3[] = "azertyuiopAZERTYUIOP";
// 	char str4[] = "azertyuiopAZERTYUIOPazertyuiopAZ";
// 	printf("%d\n", ft_str_is_lowercase(str));
// 	printf("%d\n", ft_str_is_lowercase(str2));
// 	printf("%d\n", ft_str_is_lowercase(str3));
// 	printf("%d\n", ft_str_is_lowercase(str4));
// 	return  (0);
// }