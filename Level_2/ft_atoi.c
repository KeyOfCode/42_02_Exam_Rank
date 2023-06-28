

int	ft_atoi(const char *arg)
{
	int a = __INT_MAX__;
	int i = 0;
	int sign = 1;
	int aux = 0;

	while (arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13))
		i++;
	if (arg[i] == '-')
		sign *= -1;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	while (arg[i] >= '0' && arg[i] <= '9')
	{
		aux = (arg[i] - '0') + (aux * 10);
		i++;
	}
	return (aux * sign);
}