/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:22:03 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/02/05 12:55:15 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int main(int argc , char **argv)
{
	if (argc == 2)
	{
		int i;
		i = ft_strlen (argv[1]) - 1;
		while(i >= 0)
		{
			write(1,&argv[1][i],1);
			i--;
		}
	}
	write(1,"\n",1);
}
