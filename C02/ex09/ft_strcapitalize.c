/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:35:18 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/29 11:55:23 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] <= 47)
			str[i] -= 32;
		i++;
	}
	return (str);
}
// #include  <stdio.h>
// int main()
// {
// char str[] = "heLLo TEst HI";
// ft_strcapitalize(str);
// printf("%s", str);
// return (0);
// }
