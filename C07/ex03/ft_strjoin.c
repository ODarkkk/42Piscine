/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:12:55 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/10 11:39:26 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*newstr(int size, char **strs, char *str, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;	

	i = 0;
	len = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += (size - 1) * ft_strlen(sep);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	newstr(size, strs, str, sep);
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str[3];
// 	str[0] = "I";
// 	str[1] = "am";
// 	str[2] = "Groot";	printf("%s\n", ft_strjoin(3, str, " -.|.- "));
// 	return (0);
// }