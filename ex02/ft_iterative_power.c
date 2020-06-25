/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:57:33 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/25 12:01:11 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power);
{
	int result;
	result = 1;

	if (power < 0)
		return(0);
	while(power --)
		result *= nb;
	return(result);
}
