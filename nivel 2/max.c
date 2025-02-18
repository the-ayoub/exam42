/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:52:39 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/02/17 16:33:53 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	if (!tab)
		return(0);
	//int *tmp;
	int aux;
	int i = 1;
	aux = tab[0];
	while (len >= i)
	{
		if (aux < tab[i])
			aux = tab[i];
		i++;
	}
	return(aux);
}
