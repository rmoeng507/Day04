/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:09:56 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/25 12:15:22 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index);
{
  if(index < 0)
  return(-1);

if (index == 0)
  return(0);

if (index == 1)
	return(1);

return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
