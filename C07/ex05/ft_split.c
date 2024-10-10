/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:08:35 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/10 11:25:06 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_str(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_strlen_sep(str, charset);
	word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**s;
	int		i;

	i = 0;
	s = (char **)malloc(sizeof(char *)
			* (count_str(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check(*str, charset))
			str++;
		if (*str != '\0')
		{
			s[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check(*str, charset))
			str++;
	}
	s[i] = 0;
	return (s);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int		index;
// 	char	**split;
// 	(void)	argc;
// 	split = ft_split(argv[1], argv[2]);
// 	index = 0;
// 	while (split[index])
// 	{
// 		printf("%s\n", split[index]);
// 		index++;
// 	}
// }