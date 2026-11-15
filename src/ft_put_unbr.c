/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadane <asaadane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 04:52:29 by asaadane          #+#    #+#             */
/*   Updated: 2022/12/18 23:01:43 by asaadane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*This function allows to print unsigned numbers*/
void	ft_put_unbr(unsigned int num, int *lenght)
{
	if (num >= 10)
	{
		ft_put_unbr((num / 10), lenght);
		ft_put_char((num % 10) + 48, lenght);
	}
	else
		ft_put_char((num + 48), lenght);
}
