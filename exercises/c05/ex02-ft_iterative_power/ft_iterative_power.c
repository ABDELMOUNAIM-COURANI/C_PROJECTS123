

int ft_iterative_power(int nb, int power){

	int i;
	int result;

	i = 1;
	result = nb;

	if (power < 0){

		return 0;

	}

	if (power == 0){

		return 1;

	}

	while (i < power){

		result *= nb;
		i++;

	}

	return result;
}
