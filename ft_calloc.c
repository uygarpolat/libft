/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 03:33:24 by upolat            #+#    #+#             */
/*   Updated: 2024/04/23 13:40:09 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*voidstr;
	char	*charstr;
	size_t	memory;
	size_t	i;

	memory = count * size;
	if (count != 0 && SIZE_MAX / count < size)
		return (NULL);
	voidstr = malloc(memory);
	if (voidstr == NULL)
		return (NULL);
	i = 0;
	charstr = (char *)voidstr;
	while (i < memory)
	{
		charstr[i] = 0;
		i++;
	}
	return (voidstr);
}
/*
#include <stdio.h>

int main() {
    // Define the number of elements and size of each element
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Allocate memory using ft_calloc
    int *arr = ft_calloc(num_elements, element_size);
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Verify that all fields are populated by zeroes
    int all_zeroes = 1;
    for (size_t i = 0; i < num_elements; ++i) {
        if (arr[i] != 0) {
            all_zeroes = 0;
            break;
        }
    }

    // Output the result
    if (all_zeroes) {
        printf("All fields are populated by zeroes\n");
    } else {
        printf("Fields are not properly initialized\n");
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
*/
