/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_fibonacci.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:31:58 by raphael           #+#    #+#             */
/*   Updated: 2024/06/25 00:20:13 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index)
{
	int result1;
	int result2;
	int temp;

	temp = 0;
	result1 = 1;
	result2 = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	while(index > 2)
	{
	result1 += result2;
	temp = result2;
	result2 = result1;
	result1 = temp;
	index--;
	}
	return (result2);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
	int a = atoi(argv[1]);
	printf("index = %d\n result = %d\n", a, ft_fibonacci(a));
	return 0;
	}
	if(argc == 3)
	{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("index = %d\n result = %d\n\n", a, ft_fibonacci(a));
	printf("index = %d\n result = %d\n", b, ft_fibonacci(b));
	return 0;
	}
	if(argc == 4)
	{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	printf("index = %d\n result = %d\n\n", a, ft_fibonacci(a));
	printf("index = %d\n result = %d\n\n", b, ft_fibonacci(b));
	printf("index = %d\n result = %d\n", c, ft_fibonacci(c));
	return 0;
	}
	if(argc == 5)
	{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);
	printf("index = %d\n result = %d\n\n", a, ft_fibonacci(a));
	printf("index = %d\n result = %d\n\n", b, ft_fibonacci(b));
	printf("index = %d\n result = %d\n\n", c, ft_fibonacci(c));
	printf("index = %d\n result = %d\n", d, ft_fibonacci(d));
	return 0;
	}
	if(argc == 6)
	{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);
	int e = atoi(argv[5]);
	printf("index = %d\n result = %d\n\n", a, ft_fibonacci(a));
	printf("index = %d\n result = %d\n\n", b, ft_fibonacci(b));
	printf("index = %d\n result = %d\n\n", c, ft_fibonacci(c));
	printf("index = %d\n result = %d\n\n", d, ft_fibonacci(d));
	printf("index = %d\n result = %d\n", e, ft_fibonacci(e));
	return 0;
	}
	if(argc == 7)
	{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);
	int e = atoi(argv[5]);
	int f = atoi(argv[6]);
	printf("index = %d\n result = %d\n\n", a, ft_fibonacci(a));
	printf("index = %d\n result = %d\n\n", b, ft_fibonacci(b));
	printf("index = %d\n result = %d\n\n", c, ft_fibonacci(c));
	printf("index = %d\n result = %d\n\n", d, ft_fibonacci(d));
	printf("index = %d\n result = %d\n\n", e, ft_fibonacci(e));
	printf("index = %d\n result = %d\n\n", f, ft_fibonacci(f));
	return 0;
	}
}