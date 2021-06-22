/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:53:26 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/22 15:53:28 by kdelport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_chunk_limit500(t_stack *stack, int size, int *limit, int chunk)
{
	if (stack->size == (size - chunk) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 2)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 3)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 4)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 5)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 6)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 7)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 8)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 9)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 10)) + 1)
		*limit += chunk;
}

void	set_chunk_limit100(t_stack *stack, int size, int *limit, int chunk)
{
	if (stack->size == (size - chunk) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 2)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 3)) + 1)
		*limit += chunk;
	else if (stack->size == (size - (chunk * 4)) + 1)
		*limit += chunk;
}
