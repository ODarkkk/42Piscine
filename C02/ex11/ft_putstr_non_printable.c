/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:04:56 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/29 13:12:27 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[4];
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[str[i] / 16];
			hex[2] = "0123456789abcdef"[str[i] % 16];
			hex[3] = '\0';
			write(1, hex, 3);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int main(void)
// {
//     char str[] = "Hell\no, World!";
//     ft_putstr_non_printable(str);
//     return 0;
// }