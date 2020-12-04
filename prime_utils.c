/* ************************************************************************** */
/*                                                                            */
/*    primeLoad                                                               */
/*    v. alpha-1.0                                                            */
/*                                                                            */
/*    prime_utils.c                                  by Animoke (animoke.dev) */
/*                                                                            */
/* ************************************************************************** */

#include "prime.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

size_t				is_prime(unsigned long long number)
{
	unsigned long long	i;

	i = 2;
	if (number <= 1)
		return (1);
	while (i <= number / i)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

unsigned long long	find_next_prime(unsigned long long nb)
{
        unsigned long long	i;

        i = nb;
        if (is_prime(i) == 1)
        {
                return (i);
        }
        return (find_next_prime(i + 1));
}