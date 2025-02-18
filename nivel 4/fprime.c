/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:36:22 by aybelhaj          #+#    #+#             */
/*   Updated: 2025/02/17 19:03:24 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (int argc , char **argv)
{
	if (argc != 2)
		return(printf("\n"),0);
	int num = atoi(argv[1]);
	if(num == 1)
		printf("1");
	int i = 2;
	while (num > 1)
	{
		if (num % i == 0)
		{
			printf("%d",i);
			if (num != i)
				printf("*");
			num = num / i;
			i = 1;
		}
		i++;
	}
	printf("\n");
}
