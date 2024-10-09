/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:56:44 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/09 11:23:34 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include  <string.h>

int	main(void)
{
	char str1[] = "Hey1234567890";
	char str2[] = "Hey12340506070890";
	int	i;

	i = -1;
	while (++i < 8)
	{
		printf("When i is %d\n", i); 
		printf("%d\n",  strncmp(str1, str2, i));
		printf("%d\n",  ft_strncmp(str1, str2, i));
	}

		printf("When i is %d\n", i);
		printf("%d\n",  strncmp(str1, str2, i));
		printf("%d\n",  ft_strncmp(str1, str2, i));
}