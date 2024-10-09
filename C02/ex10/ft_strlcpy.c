/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:30:02 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/30 14:32:00 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (i);
}
// #include <stdio.h>

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dest[20];
//     unsigned int n = 10;
//     unsigned int len = ft_strlcpy(dest, src, n);
//     printf("Source string: %s\n", src);
//     printf("Destination string: %s\n", dest);
//     printf("Length of source string: %u\n", len);
//     return 0;
// }