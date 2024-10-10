/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:23:20 by diogferr          #+#    #+#             */
/*   Updated: 2024/10/10 12:05:09 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	arr = (int *)malloc(i * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	size;
// 	int	i;
// 	i = 0;
// 	min = 5;
// 	max = 10;
// 	size = ft_ultimate_range(&tab, min, max);
// 	while(i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }