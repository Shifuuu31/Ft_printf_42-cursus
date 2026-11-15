/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadane <asaadane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 04:52:29 by asaadane          #+#    #+#             */
/*   Updated: 2022/12/18 23:01:43 by asaadane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*This function allows to print a String*/
void	ft_put_str(char *str, int *lenght)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_put_str("(null)", lenght);
		return ;
	}
	while (str[i])
	{
		ft_put_char(str[i], lenght);
		i++;
	}
}
