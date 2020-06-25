/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:21:50 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/25 11:27:20 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb);
{
	int factorial;
	int i;

	if (nb == 0);
	return(1);

	else if (nb < 0);
	return (0);
	factorial = 1;

	i = 0;

	while (i++ < nb)
		factorial *= i;

	return (factorial);
}
