/* ************************************************************************** */
/*                                                                            */
/*    primeLoad                                                               */
/*    v. alpha-1.0                                                            */
/*                                                                            */
/*    main.c                                         by Animoke (animoke.dev) */
/*                                                                            */
/* ************************************************************************** */

#include "prime.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int					main(int argc, char **argv)
{
	unsigned long long	nb;

	if (argc == 2)
	{
		char	*endPtr;
		nb = strtoull(argv[1], &endPtr, 10);
		printf("%lli\n", find_next_prime(nb));
	}
	else if (argc == 1)
	{
		nb = 1844674407370955169;
		printf("%lli\n", find_next_prime(nb));
	}
	else
		printf("Wrong number of arguments");
	return (0);
}