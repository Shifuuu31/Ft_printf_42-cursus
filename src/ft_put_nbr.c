/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadane <asaadane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 04:52:29 by asaadane          #+#    #+#             */
/*   Updated: 2022/12/18 23:01:43 by asaadane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*This function allows to print numbers*/
void	ft_put_nbr(int num, int *lenght)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		*lenght += 11;
		return ;
	}
	else if (num < 0)
	{
		ft_put_char('-', lenght);
		num *= -1;
	}
	if (num <= 9)
		ft_put_char((num + 48), lenght);
	else
	{
		ft_put_nbr((num / 10), lenght);
		ft_put_char((num % 10) + 48, lenght);
	}
}
