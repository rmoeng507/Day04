/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:03:00 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/25 12:07:41 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power);
{
	if (!nb || power < 0)
		return(0);
	if(!power)
		return(1);
return nb* ft_recursive_power(mb, power - 1);
}
