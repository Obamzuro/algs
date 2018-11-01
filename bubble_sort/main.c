/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:06:21 by obamzuro          #+#    #+#             */
/*   Updated: 2018/11/01 15:17:38 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	bubble_sort(int *arr, int size)
{
	int		i;
	int		temp;
	int		isSorted;

	isSorted = 1;
	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = temp;
			isSorted = 0;
		}
		++i;
		if (i == size - 1 && !isSorted)
		{
			i = 0;
			isSorted = 1;
		}
	}
}

int		main(void)
{
	int		i;
	int		arr[] = {4, 8, 20, 9, 4, 13, 15, 1};

	bubble_sort(arr, sizeof(arr) / sizeof(*arr));
	i = 0;
	while (i < sizeof(arr) / sizeof(*arr))
		printf("%d ", arr[i++]);
}
