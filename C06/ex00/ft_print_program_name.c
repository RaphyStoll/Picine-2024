/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:35:27 by raphael           #+#    #+#             */
/*   Updated: 2024/06/25 11:44:54 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	if (argc != 1)
		return (1);
	while (argv[0][count])
	{
		ft_putchar(argv[0][count]);
		count++;
	}
	ft_putchar('\n');
}
