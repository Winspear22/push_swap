#include "push_swap.h"

int	find_max(t_stack *t_stack)
{
	int	a;

	a = t_stack->pos + 1;
	t_stack->max = t_stack->tab[t_stack->pos];
	while (a < t_stack->size - 1)
	{
		if (t_stack->tab[a] > t_stack->max)
			t_stack->max = t_stack->tab[a];
		a++;
	}
	a = 0;
	while (t_stack->tab[a] != t_stack->max)
		a++;
	return (a);
}

int	is_the_warrior_of_stack(t_stack *t_stack, int nbr)
{
	int	a;

	a = t_stack->pos;
	while (a < t_stack->size - 1)
	{
		if (nbr < t_stack->tab[a])
			return (0);
		a++;
	}
	return (1);
}

int	is_the_nain_of_stack(t_stack *t_stack, int nbr)
{
	int	a;

	a = t_stack->pos;
	while (a < t_stack->size - 1)
	{
		if (nbr > t_stack->tab[a])
			return (0);
		a++;
	}
	return (1);
}