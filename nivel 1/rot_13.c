/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:00:30 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/02/05 16:05:54 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main (int argc, char **argv)
{
	if(argc == 2)
	{
		char a;
		int i = 0;
		while(argv[1][i])
		{
			if((argv[1][i] >= 97 && argv[1][i] <= 109) || (argv[1][i] >= 65 && argv[1][i] <= 77))
			{
				a = argv[1][i] + 13;
				write(1,&a,1);
			}
			else if((argv[1][i] >= 110 && argv[1][i] <= 122) || (argv[1][i] >= 78 && argv[1][i] <= 90))
			{
				a = argv[1][i] - 13;
				write(1,&a,1);
			}
			else
			{
				write(1,&argv[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
}
