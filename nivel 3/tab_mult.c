/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:31:45 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/02/12 19:29:30 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putnbr(int n)
{
	char c;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	 while (str[i])
	 {
		result = result * 10 +(str[i] - '0');
		i++;
	 }
	 return (result);
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 1;
		char a;
		int b;
		int j;
		while (i <= 9)
		{
			a = i + '0';
			b = ((ft_atoi(argv[1])) * i);
			write(1,&a,1);
			write(1," x ",3);
			j = 0;
			while(argv[1][j])
			{
				write(1,&argv[1][j],1);
				j++;
			}
			write(1," = ",3);
			ft_putnbr(b);
			if (i == 9)
				break;
			write(1,"\n",1);
			i++;
		}
	}
	write(1,"\n",1);
}
