/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbethoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/19 12:34:33 by sbethoua          #+#    #+#             */
/*   Updated: 2013/12/03 14:08:31 by sbethoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
