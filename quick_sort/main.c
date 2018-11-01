/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:06:21 by obamzuro          #+#    #+#             */
/*   Updated: 2018/11/01 16:10:28 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		partition(int *arr, int bot, int top)
{
	int		mid;
	int		temp;

	mid = arr[(bot + top) / 2];
	while (bot <= top)
	{
		while (arr[bot] < mid)
			++bot;
		while (arr[top] > mid)
			--top;
		if (bot <= top)
		{
			temp = arr[bot];
			arr[bot] = arr[top];
			arr[top] = temp;
			++bot;
			--top;
		}
	}
	return (bot);
}

void	quick_sort(int *arr, int bot, int size)
{
	int mid;

	if (bot < size)
	{
		mid = partition(arr, bot, size);
		quick_sort(arr, bot, mid - 1);
		quick_sort(arr, mid, size);
	}
}

int		main(void)
{
	int		i;
	int		arr[] = {4, 8, 13, 20, 13, 4, 15, 1, 0};

	quick_sort(arr, 0, sizeof(arr) / sizeof(*arr) - 1);
	i = 0;
	while (i < sizeof(arr) / sizeof(*arr))
		printf("%d ", arr[i++]);
}
