/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uphex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadane <asaadane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:22:59 by asaadane          #+#    #+#             */
/*   Updated: 2022/12/13 08:24:15 by asaadane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*This function allows to print uppercase hexadecimal numbers*/
void	ft_put_uphex(unsigned int num, int *lenght)
{
	const char	*basexx;

	basexx = "0123456789ABCDEF";
	if (num < 16)
		ft_put_char(basexx[num], lenght);
	else
	{
		ft_put_uphex((num / 16), lenght);
		ft_put_char(basexx[num % 16], lenght);
	}
}
