#include "push_swap.h"

void	ft_swap(int *nb1, int *nb2)
{
	int temp;

	temp = *nb1;
	*nb1 = *nb2;
	*nb2 = temp;
}

// void	ft_ss(t_list list_a, t_list list_b)
// {
// 	ft_swap();
// 	ft_swap();
// }