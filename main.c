/* ************************************************************************** */
/*                                                                            */
/*    primeLoad                                                               */
/*    v. alpha-1.0                                                            */
/*                                                                            */
/*    main.c        by Animoke (animoke.dev)                                  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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