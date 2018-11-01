/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:06:21 by obamzuro          #+#    #+#             */
/*   Updated: 2018/11/01 15:42:08 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	selection_sort(int *arr, int size)
{
	int		i;
	int		j;
	int		min;
	int		minArr;

	i = 0;
	while (i < size)
	{
		min = arr[i];
		minArr = i;
		j = i + 1;
		while (j < size)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				minArr = j;
			}
			++j;
		}
		if (minArr != i)
		{
			arr[minArr] = arr[i];
			arr[i] = min;
		}
		++i;
	}
}

int		main(void)
{
	int		i;
	int		arr[] = {4, 8, 13, 20, 13, 4, 15, 1, 0};

	selection_sort(arr, sizeof(arr) / sizeof(*arr));
	i = 0;
	while (i < sizeof(arr) / sizeof(*arr))
		printf("%d ", arr[i++]);
}
