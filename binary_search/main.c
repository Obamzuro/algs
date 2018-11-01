/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:52:56 by obamzuro          #+#    #+#             */
/*   Updated: 2018/11/01 15:02:21 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct Result
{
	size_t	pos;
	int		isFound;
};

struct Result	makeResult(size_t pos, int isFound)
{
	struct Result r;
	r.pos = pos;
	r.isFound = isFound;
	return (r);
}

#define FOUND(i)		makeResult(i, 1)
#define NOTFOUND(i)		makeResult(i, 0)

struct Result	binarySearch(size_t amount, int *arr, int num)
{
	size_t		first;
	size_t		last;
	size_t		mid;

	first = 0;
	last = amount;
	if (amount == 0)
		return NOTFOUND(0);
	else if (num < arr[0])
		return NOTFOUND(0);
	else if (num > arr[last - 1])
		return NOTFOUND(0);

	while (first < last)
	{
		mid = first + (last - first) / 2;
		if (num <= arr[mid])
			last = mid;
		else
			first = mid + 1;
	}

	if (arr[last] == num)
		return FOUND(last);
	else
		return NOTFOUND(last);
}

int				main(void)
{
	int arr[] = {1, 4, 8, 13, 15, 20};
	struct Result r = binarySearch(6, arr, 14);
	printf("%s at %zu\n", r.isFound ? "Found" : "Not found", r.pos);
}
