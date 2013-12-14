/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_print_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbethoua <sbethoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 06:33:15 by sbethoua          #+#    #+#             */
/*   Updated: 2013/12/14 06:48:30 by sbethoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

char	*hr_key_search(t_keyword *keyword, int key)
{
	t_keyword	current;

	current = keyword;
	while (current)
	{
		if (current->key == key)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

void	hr_value_print(t_keyword *keyword) // ++ params ?
{
	
}