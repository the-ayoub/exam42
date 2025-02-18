/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:16:27 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/02/10 16:41:36 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int argc, char**argv)
{
	if (argc == 2)
	{
		char a;
		int i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i]<= 'z')
			{
				write(1,&argv[1][i],1);
				//i++;
			}
			if (argv[1][i] >= 'A' && argv[1][i]<= 'Z')
			{
				write(1,"_",1);
				a = argv[1][i] + 32;
				write(1,&a,1);
			}
			i++;
		}
	}
	write(1,"\n",1);
}
