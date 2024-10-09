/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:42:36 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/30 14:38:34 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
// 	printf("%d",  ft_str_is_uppercasee(str));
// 	printf("\n%d",  ft_str_is_uppercase(str2));
// 	printf("\n%d",  ft_str_is_uppercase(str3));
// 	printf("\n%d",  ft_str_is_uppercase(str4));
// 	return  (0);
// }