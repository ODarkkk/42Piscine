/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogferr <diogferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:11:00 by diogferr          #+#    #+#             */
/*   Updated: 2024/09/29 17:53:03 by diogferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include  <stdio.h>
int     main(void)
{
        int nbr;
        int *nbr1 = &nbr;
        int **nbr2 = &nbr1;
        int ***nbr3 = &nbr2;
        int ****nbr4 = &nbr3;
        int *****nbr5 = &nbr4;
        int ******nbr6 = &nbr5;
        int *******nbr7 = &nbr6;
        int ********nbr8 = &nbr7;
        int *********nbr9 = &nbr8;
        
        ft_ultimate_ft(&nbr);
        printf("%d", nbr);
        return 0; 
}
